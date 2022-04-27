/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:40 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 00:15:44 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &toCopy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator = (PresidentialPardonForm const &toCopy);
};

#endif
