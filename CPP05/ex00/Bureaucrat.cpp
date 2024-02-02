#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) , grade(grade){
    if(grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(){
}


Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs){
    if(this != &rhs)
        grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade()const{
    return grade;
}

void Bureaucrat::incrementGrade(){
    if(grade -1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade(){
    if(grade +1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

std::ostream &operator<<(std::ostream &o,const Bureaucrat &rhs){
    o << rhs.getName() << " , bureaucrat grade "<< rhs.getGrade();
    return o;
}
