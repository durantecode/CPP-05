/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:06:33 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 00:15:54 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &toCopy)
{
	*this = toCopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &toCopy)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}
