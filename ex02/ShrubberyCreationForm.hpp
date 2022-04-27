/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:28 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 00:15:29 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &toCopy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const &toCopy);
};

//std::ostream    &operator<<(std::ostream &out, ShrubberyCreationForm const &toCopy);

#endif
