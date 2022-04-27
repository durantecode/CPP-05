/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:34 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 00:15:40 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &toCopy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator = (RobotomyRequestForm const &toCopy);
};

#endif
