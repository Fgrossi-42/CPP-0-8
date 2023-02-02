#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        virtual ~Cat();

        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string type);

    protected:
        std::string type;
    private:
        Brain *brain;
};

#endif