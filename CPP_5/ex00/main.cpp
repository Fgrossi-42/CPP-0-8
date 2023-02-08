#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Bob", 1);
    b.decrementGrade(7);
    std::cout << "grade is: "<< b.getGrade() << std::endl;
    b.decrementGrade(35);
    std::cout << "grade is: "<< b.getGrade() << std::endl;
    try
    {
        b.decrementGrade(120);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "grade is: "<< b.getGrade() << std::endl;
    return (0);
}