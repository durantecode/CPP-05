/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:06:39 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 09:21:10 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
					Form("ShrubberyCreationForm", 145, 137), m_target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &toCopy) :
					Form("ShrubberyCreationForm", 145, 137)
{
	*this = toCopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &toCopy)
{
	this->m_target = toCopy.getTarget();
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->m_target);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}
