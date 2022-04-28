/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:34 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 09:37:11 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string m_target;
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &toCopy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator = (RobotomyRequestForm const &toCopy);

		const std::string &getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};

#endif
