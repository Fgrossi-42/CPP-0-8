#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();

        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);

    protected:
        std::string type;
};

#endif