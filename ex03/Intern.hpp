/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 19:16:07 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/03 20:59:01 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form *m_formArray[3];
		std::string m_namesArray[3];

	public:
		Intern(void);
		Intern(Intern const &toCopy);
		~Intern(void);
		Intern &operator = (Intern const &toCopy);

		Form *makeForm(const std::string &formName, const std::string &targetName);
};

#endif
