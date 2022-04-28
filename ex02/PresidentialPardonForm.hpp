/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:40 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 09:37:15 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string m_target;
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &toCopy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator = (PresidentialPardonForm const &toCopy);

		const std::string &getTarget() const;
		virtual void execute(Bureaucrat const &executor) const;
};

#endif
