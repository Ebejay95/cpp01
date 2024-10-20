/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:26:48 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/20 08:37:26 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string findandreplace(std::string str, const std::string& from, const std::string& to) {
	std::string result;
	size_t startPos = 0;
	size_t foundPos;
	while ((foundPos = str.find(from, startPos)) != std::string::npos) {
		result.append(str, startPos, foundPos - startPos);
		result.append(to);
		startPos = foundPos + from.length();
	}
	result.append(str, startPos, std::string::npos);
	return result;
}

int	main(int argc, char **argv)
{
	std::string fileContent;
	std::string modified;
	std::stringstream buffer;
    std::string filename;

	if (argc != 4)
	{
		std::cerr << "./sed_is_for_losers [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	filename = argv[1];
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "file " << filename << " not found"<< std::endl;
		return (1);
	}
	std::cerr << "file " << filename << " found - try to read"<< std::endl;
	buffer << file.rdbuf();
	fileContent = buffer.str();
	file.close();
	std::cout << std::endl;
	std::cerr << "File content:\n" << fileContent << std::endl;
	modified = findandreplace(fileContent, argv[2], argv[3]);

	std::string outFilename = filename + ".replace";
	std::ofstream outFile(outFilename.c_str());
	if (!outFile.is_open()) {
		std::cerr << "Error: Unable to create file " << outFilename << std::endl;
		return (1);
	}
	outFile << modified;
	outFile.close();
	std::cout << "\nModified content has been written to the file " << outFilename << std::endl;
	std::cout << "New files content:\n" << modified << std::endl;
	return (0);
}
