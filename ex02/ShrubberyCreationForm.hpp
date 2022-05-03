/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 00:05:28 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/03 03:48:15 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

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

# define ASCII_TREES \
"               ,@@@@@@@,					" << std::endl <<		\
"       ,,,.   ,@@@@@@/@@,  .oo8888o.		" << std::endl <<		\
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o		" << std::endl <<		\
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl <<		\
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		" << std::endl <<		\
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'		" << std::endl <<		\
"   `&%\\ ` /%&'    |.|        \\ '|8'		" << std::endl <<		\
"       |o|        | |         | |			" << std::endl <<		\
"       |.|        | |         | |			" << std::endl <<		\
"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_	" << std::endl

# define ASCII_TREE \
"          .     .  .      +     .      .          . " << std::endl << \
"     .       .      .     #       .           ." << std::endl << \
"        .      .         ###            .      .      ." << std::endl << \
"      .      .    #:. .:## ##:. .:#  .      ." << std::endl << \
"          .      .  #### ### ####   ." << std::endl << \
"       .      #:.    .:# ### #:.    .:#   .        .       ."  << std::endl << \
"  .              ######### #########         .        ." << std::endl << \
"        .     #:.   #### ### ####   .:#    .       ." << std::endl << \
"     .     .   #######  ## ##  #######                    . " << std::endl << \
"                . ## ##### ##### ##            .      ." << std::endl << \
"    .    #:. ...  .:## ### ### ##:.  ... .:#      ." << std::endl << \
"      .      ####### ## ##### ## #######       .     ." << std::endl << \
"    .    .      #####  #######  #####     .      ." << std::endl << \
"            .            000           .     ." << std::endl << \
"       .         .   .   000     .        .       ." << std::endl << \
".. .. ..................O000O........................ ......" << std::endl

#endif
