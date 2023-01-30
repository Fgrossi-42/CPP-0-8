#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        virtual ~Dog();

        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);

    protected:
        std::string type;
};

#endif