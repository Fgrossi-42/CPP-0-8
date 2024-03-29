#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;

    public:

        RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(RobotomyRequestForm const &other);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

        void execute(Bureaucrat const &executor) const;
};

#endif