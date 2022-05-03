/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:20:46 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/03 20:59:00 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	m_namesArray[0] = "shrubbery request";
	m_namesArray[1] = "robotomy request";
	m_namesArray[2] = "pardon request";
}

Intern::Intern(Intern const &toCopy)
{
	*this = toCopy;
}

Intern &Intern::operator = (Intern const &toCopy)
{
	this->m_formArray[0] = toCopy.m_formArray[0];
	this->m_formArray[1] = toCopy.m_formArray[1];
	this->m_formArray[2] = toCopy.m_formArray[2];
	return *this;
}

Form *Intern::makeForm(const std::string &formName, const std::string &targetName)
{
	ShrubberyCreationForm	shrubbery(targetName);
	RobotomyRequestForm		robotomy(targetName);
	PresidentialPardonForm	pardon(targetName);

	m_formArray[0] = &shrubbery;
	m_formArray[1] = &robotomy;
	m_formArray[2] = &pardon;

	for (int i = 0; i < 3; i++)
	{
		if (this->m_namesArray[i] == formName)
		{
			std::cout << "Intern creates " << m_formArray[i]->getName() << std::endl;
			return (m_formArray[i]);
		}
	}
	std::cout << "Intern doesn't know " << formName << std::endl;
	return(NULL);
}

Intern::~Intern(void)
{

}
