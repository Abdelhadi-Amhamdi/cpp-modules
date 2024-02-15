/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:16:25 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/03 09:06:02 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace_if_exist(std::string line, std::string old_str, std::string new_str)
{
	size_t f = line.find(old_str);
	while (f != std::string::npos)
	{
		line.erase(f, old_str.size());
		line.insert(f, new_str);
		f = line.find(old_str, f + old_str.size());
	}
	return (line);
}

int	main(int ac, char **av)
{
	std::string filename;
	std::string new_filename;
	std::string str_old;
	std::string str_new;
	std::string content;

	if (ac != 4)
	{
		std::cout << "invalid args" << std::endl;
		return (0);
	}
	filename = av[1];
	str_old = av[2];
	str_new = av[3];
	if (filename.empty() || str_old.empty() || str_new.empty())
	{
		std::cout << "invalid args" << std::endl;
		return (0);
	}
	new_filename = filename + ".replace";
	std::fstream old_file_stream(filename, std::ios::in);
	if (!old_file_stream.is_open())
	{
		std::cout << "file not exits !" << std::endl;
		return (0);
	}else {
		old_file_stream.seekg(0, std::ios::end);
		if (!old_file_stream.tellg()) {
			std::cout << "Empty file" << std::endl;
			old_file_stream.close();
			return (0);
		}
		else
			old_file_stream.seekg(0);
	}
	std::fstream new_file_stream(new_filename, std::ios::out);
	if (!new_file_stream.is_open())
	{
		std::cout << "file cannot be created !" << std::endl;
		old_file_stream.close();
		return (0);
	}
	while (getline(old_file_stream, content))
	{
		new_file_stream << replace_if_exist(content, str_old, str_new);
		if (!old_file_stream.eof())
			new_file_stream << std::endl;
	}
	old_file_stream.close();
	new_file_stream.close();
	return (0);
}
