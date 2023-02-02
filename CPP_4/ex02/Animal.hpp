#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string type);

    protected:
        std::string type;
};

#endif