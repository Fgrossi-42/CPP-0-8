/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:25:12 by fgrossi           #+#    #+#             */
/*   Updated: 2023/01/16 17:35:10 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce();
    private:
        std::string _name;
        std::string _type;
};