/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:07:04 by fgrossi           #+#    #+#             */
/*   Updated: 2023/01/13 12:12:04 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int
	main(void)
{
	PhoneBook PhoneBook;
	bool run;
	std::string command;

	PhoneBook.show_startup();
	run = true;
	while (run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.add_contact();
		else if (command == "SEARCH")
			PhoneBook.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			run = false;
		}
	}
	return (0);
}
