/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:27:17 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/28 09:37:30 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	m_name;
		const int			m_gradeToSign;
		const int			m_gradeToExecute;
		bool				m_isSigned;

		static const int	lowGrade = 150;
		static const int	highGrade = 1;
		Form(void);

	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &toCopy);
		~Form(void);
		Form &operator = (Form const &toCopy);

		const std::string &getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool isSigned() const;
		void beSigned(Bureaucrat &b);
		virtual void execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream    &operator<<(std::ostream &out, Form const &toCopy);

#endif
