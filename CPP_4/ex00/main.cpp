#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* animale = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* uomo = new WrongAnimal();
    const WrongAnimal* not_a_cat = new WrongCat();

    std::cout << "----------------" << std::endl << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    std::cout << "----------------" << std::endl << std::endl;
    animale->makeSound();
    cat->makeSound();
     std::cout <<"il tipo é: " << cat->getType()<< std::endl;
    std::cout << "----------------" << std::endl;
    animale->makeSound();
    std::cout <<"il tipo é: " << animale->getType()<< std::endl;
    std::cout << "----------------" << std::endl;
    dog->makeSound();
    std::cout <<"il tipo é: " << dog->getType()<< std::endl << std::endl;
    std::cout << "----------------" << std::endl;
    uomo->makeSound();
    std::cout <<"il tipo é: " << uomo->getType()<< std::endl << std::endl;
    std::cout << "----------------" << std::endl;
    not_a_cat->makeSound();
    std::cout <<"il tipo é: " << not_a_cat->getType()<< std::endl << std::endl;
    std::cout << "----------------" << std::endl;
    delete animale;
    delete cat;
    delete dog;
    return 0;
}


// int main()
// {
//     Animal *animale = new Animal();
//     Cat *cat = new Cat();
//     Dog *dog = new Dog();

//     std::cout << "----------------" << std::endl << std::endl;
//     cat->makeSound();
//      std::cout <<"il tipo é: " << cat->getType()<< std::endl;
//     std::cout << "----------------" << std::endl;
//     animale->makeSound();
//     std::cout <<"il tipo é: " << animale->getType()<< std::endl;
//     std::cout << "----------------" << std::endl;
//     dog->makeSound();
//     std::cout <<"il tipo é: " << dog->getType()<< std::endl << std::endl;
//     std::cout << "----------------" << std::endl;
//     delete animale;
//     delete cat;
//     delete dog;
//     return (0);
// }
