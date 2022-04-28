/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:28 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 09:37:03 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string m_target;
		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &toCopy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const &toCopy);

		const std::string &getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};

#endif
