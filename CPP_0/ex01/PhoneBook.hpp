/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:27:29 by fgrossi           #+#    #+#             */
/*   Updated: 2023/01/12 19:30:30 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

class PhoneBook
{   
    public:
    Contact profile[8];
};

class Contact
{
    public:
    std::string name;
    std::string surname;
    int age;
    char sex;
    
    void set_values (void);
    void show_values (void);
};

void Contact::show_values (void) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    std::cout << "age: " << age << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

void Contact::set_values (void) {
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Surname: ";
    std::cin >> surname;
    std::cout << "age: ";
    std::cin >> age;
    std::cout << "sex: ";
    std::cin >> sex;
}