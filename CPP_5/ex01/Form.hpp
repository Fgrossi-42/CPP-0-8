#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const	_name;
        bool				_signed;
        int const			_gradeToSign;
        int const			_gradeToExecute;
    
    public:
        Form(std::string const &name, int gradeToSign, int gradeToExecute);
        Form(Form const &src);
        ~Form(void);
        Form	&operator=(Form const &rhs);

    //     std::string getName() const;
    //     bool getSigned() const;
    //     int getGradeToSign() const;
    //     int getGradeToExecute() const;
    //     void beSigned(Bureaucrat const &b);
};
}

#endif