/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:06:33 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/03 03:26:57 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
					Form("RobotomyRequestForm", 72, 45), m_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &toCopy) :
					Form("RobotomyRequestForm", 72, 45)
{
	*this = toCopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &toCopy)
{
	this->m_target = toCopy.getTarget();
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::ExecuteException();
	else if (executor.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "EXECUTE!" << std::endl;
	}
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return (this->m_target);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}
