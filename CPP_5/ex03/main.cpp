#include "Intern.hpp"

int main()
{
    Intern someRandomInternA;
    Intern someRandomInternB;
    Intern someRandomInternC;
    Bureaucrat someRandomBureaucrat("someRandomBureaucrat", 1);
    Form* a;
    Form* b;
    Form* c;
    a = someRandomInternA.makeForm("robotomy request", "Bender");
    b = someRandomInternB.makeForm("presidential pardon", "Pinocho");
    c = someRandomInternC.makeForm("shrubbery creation", "POLPO");

    a->beSigned(someRandomBureaucrat);
    a->execute(someRandomBureaucrat);
    b->beSigned(someRandomBureaucrat);
    b->execute(someRandomBureaucrat);
    c->beSigned(someRandomBureaucrat);
    c->execute(someRandomBureaucrat);
    
    delete a;
    delete b;
    delete c;
    return (0);
}
