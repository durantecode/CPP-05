/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:14:24 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/23 18:08:56 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name), m_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->m_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const std::string &Bureaucrat::getName() const
{
	return (this->m_name);
}

int Bureaucrat::getGrade() const
{
	return (this->m_grade);
}

void Bureaucrat::gradeUp()
{
	this->m_grade--;
	if (this->getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeDown()
{
	this->m_grade++;
	if (this->getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy)
{
	*this = toCopy;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_grade = toCopy.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(void) {}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &toCopy)
{
	out << toCopy.getName();
	out << ", bureaucrat grade ";
	out << toCopy.getGrade();
	return out;
}
