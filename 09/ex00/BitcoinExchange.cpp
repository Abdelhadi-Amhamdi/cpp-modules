/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:17:39 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/12 22:05:41 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &b) {
    *this = b;
}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &b) {
    if (this != &b) 
        this->database = b.database;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

double BitcoinExchange::dateToDouble(std::stringstream &line_stream) const {
    size_t year,month,day;

    line_stream >> year;
    line_stream.seekg(1, std::ios::cur);
    line_stream >> month;
    line_stream.seekg(1, std::ios::cur);
    line_stream >> day;
    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0)
        return (-1);
    if (year % 4 && month == 2 && day > 28)
        return (-1);
    if (month <= 7 && month % 2 == 0 && day > 30)
        return (-1);
    if (month > 7 && month % 2 == 1 && day > 30)
        return (-1);
    return ((((year * 100) + month) * 100) + day);
}

std::string BitcoinExchange::dateToString(double date) const {
    int year,month,day;
    std::string ret;
    std::stringstream stream;
    year = floor(date / 10000);
    month = floor(date - year * 10000) / 100;
    day = floor(date - year * 10000 - month * 100);
    stream << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day;
    stream >> ret;
    return (ret);
}

bool BitcoinExchange::is_empty_file(std::ifstream &s) {
    s.seekg(0, std::ios::end);
    if (!s.tellg())
        return (true);
    s.seekg(0);
    return (false);
}

int BitcoinExchange::init(std::string &filename) {
    std::ifstream database_stream(filename.c_str());
    if (!database_stream.is_open()) {
        std::cout << "Error: cannot open the input file" << std::endl;
        return (1);
    }
    if (is_empty_file(database_stream)) {
        std::cout << "Error: empty file" << std::endl;
        database_stream.close();
        return (1);
    }
    std::string line;
    while (getline(database_stream, line)) {
        if (std::isdigit(line[0])) {
            float price;
            std::stringstream line_stream(line);
            long date = dateToDouble(line_stream);
            line_stream.seekg(1, std::ios::cur);
            line_stream >> price;
            database[date] = price;
        }
    }
    database_stream.close();
    if (!database.size()) {
        std::cout << "Error : empty database !" << std::endl;
        return (1);
    }
    return (0);
}

bool BitcoinExchange::check_data(std::string &date, std::string &amount, float &a, long &d) const {
    int dot = 0;
    for (size_t i = 0; i < amount.size(); i++) {
        if ((!std::isdigit(amount[i]) && amount[i] != '.' && amount[i] != '-' && amount[i] != '+') \
        || (amount[i] == '.' && (!i || i == amount.size() - 1)) || ((amount[i] == '-' || amount[i] == '+') && (i || amount.size() == 1)))
            return (false);
        else if (amount[i] == '.')
            dot++;
    }
    if (dot > 1)
        return (false);
    std::stringstream amount_stream(amount);
    amount_stream >> a;
    for (size_t i = 0; i < date.size(); i++) {
        if ((!std::isdigit(date[i]) && date[i] != '-') || (date[i] == '-' && (!i || i == date.size() - 1 || (i != 4 && i != 7))) || (date[i] == '-' && date[i + 1] == '-')) {
            return (false);
        }
    }
    std::stringstream date_stream(date);
    d = dateToDouble(date_stream);
    return (true);
}

bool BitcoinExchange::isvalid_data(std::string &str, float &a, long &d) const {
    std::string date,amount;
    size_t del = str.find(" | ");
    if (del == std::string::npos)
        return (false);
    date = str.substr(0, del);
    amount = str.substr(del + 3, str.size() - del - 3);
    if (date.empty() || amount.empty())
        return (false);
    return (check_data(date, amount, a, d));
}

bool BitcoinExchange::isvalidline(std::string &str) const {
    for (size_t i = 0; i < str.size(); i++) {
        if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != '.' && str[i] != ' ' && str[i] != '|' && str[i] != '+') 
            return (false);
    }
    return (true);
}

int BitcoinExchange::exchange(std::string &filename) {
    std::string line;
    std::ifstream ifile(filename.c_str());
    if (!ifile.is_open()) {
        std::cout << "Error : cannot open the input file" << std::endl;
        return (1);
    }
    if (is_empty_file(ifile)) {
        std::cout << "Error : empty file" << std::endl;
        ifile.close();
        return (1);
    }
    while (getline(ifile, line)) {
        if (isvalidline(line)) {
            float amount = 0, price = 0;
            long date = 0;
            if (!isvalid_data(line, amount, date) || date < 0 || date < database.begin()->first) {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            if (amount > 1000) {
                std::cout << "Error: too large number" << std::endl;
                continue;
            }
            if (amount < 0) {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            std::map<long, float>::iterator p = database.find(date);
            if (p != database.end())
                price = p->second;
            else {
                std::map<long, float>::iterator it = database.lower_bound(date);
                if (it != database.begin())
                    price = (--it)->second;
                else
                    price = it->second;
            }
            std::cout << dateToString(date) << " => " << amount << " = " << amount * price << std::endl;
        } else if (line !=  "date | value" || (line ==  "date | value" && ifile.tellg() > static_cast<std::streamoff>(line.size()) + 1))
            std::cout << "Error: bad input => " << line << std::endl;
    }
    ifile.close();
    return (0);
}
