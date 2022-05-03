/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:06:27 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/03 03:12:21 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
					Form("PresidentialPardonForm", 25, 5), m_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &toCopy) :
					Form("PresidentialPardonForm", 25, 5)
{
	*this = toCopy;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &toCopy)
{
	this->m_target = toCopy.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::ExecuteException();
	else if (executor.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox!" << std::endl;
	}
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return (this->m_target);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}
