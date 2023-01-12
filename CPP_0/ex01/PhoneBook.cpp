/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:57:20 by fgrossi           #+#    #+#             */
/*   Updated: 2023/01/12 19:25:15 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include "PhoneBook.hpp"


int main(void)
{
    PhoneBook pollo;
    std::string answer;
    std::cout<< "ADD, SEARCH, EXIT" << std::endl << std::endl;
    int i;
    int j;

    i = 0;
    while (std:: cin >> answer)
    {
        if(answer == "EXIT")
            break;
        if(answer == "ADD")
        {
            if(i < 3)
            {
                profile[i].set_values();
                i++;
            }
            else
            {
                i = 0;
                profile[i].set_values();
            }
        }
        if(answer == "SEARCH")
        {
            j = 0;
            std::cout << std::endl << "here are your contact: " << std::endl << std::endl;
            while(profile[j].name !=  "")
            {
                profile[j].show_values();
                std::cout << std::endl;
                j++;
            }   
        }
    }
        
        
    
}