/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:27:02 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/02 23:58:38 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : m_name(""), m_gradeToSign(150), m_gradeToExecute(150),
			m_isSigned(false)
{
	
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : m_name(name), 
			m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute), m_isSigned(false)
{
	if (gradeToSign < highGrade || gradeToExecute < highGrade)
		throw Form::GradeTooHighException();
	else if (gradeToSign > lowGrade || gradeToExecute > lowGrade)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &toCopy) : m_name(toCopy.getName()), m_gradeToSign(toCopy.getSignGrade()), 
					m_gradeToExecute(toCopy.getExecuteGrade()), m_isSigned(toCopy.isSigned())
{
	*this = toCopy;
}

Form &Form::operator = (Form const &toCopy)
{
	this->m_isSigned = toCopy.isSigned();
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low");
}

const char *Form::ExecuteException::what() const throw()
{
	return ("Form must be signed to be executed");
}

const std::string &Form::getName() const
{
	return (this->m_name);
}

int Form::getSignGrade() const
{
	return (this->m_gradeToSign);
}

int Form::getExecuteGrade() const
{
	return (this->m_gradeToExecute);
}

bool Form::isSigned() const
{
	return (this->m_isSigned);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= Form::getSignGrade())
		this->m_isSigned = true;
	b.signForm(this->isSigned(), this->getName());
	if (b.getGrade() > Form::getSignGrade())
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{

}

std::ostream &operator<<(std::ostream &out, Form const &toCopy)
{
	out << "Form " << toCopy.getName();
	out << " is grade " << toCopy.getSignGrade() << " and";
	if (toCopy.isSigned())
		out << " is signed";
	else
		out << " is not signed";
	return out;
}
