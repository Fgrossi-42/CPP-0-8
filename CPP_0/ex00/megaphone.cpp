/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:37:11 by fgrossi           #+#    #+#             */
/*   Updated: 2023/01/12 17:58:20 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main (int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc < 2)
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
      while(argv[i])
      {
        j = 0;
        while(argv[i][j])
        {
            std::cout << (char) toupper(argv[i][j]);
            j++;       
        }
        std::cout << " "; 
        i++;
      }
      std::cout<<std::endl;
}