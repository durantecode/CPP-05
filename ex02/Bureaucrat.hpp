/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:14:20 by ldurante          #+#    #+#             */
/*   Updated: 2022/04/27 22:01:31 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string	m_name;
		int			m_grade;

		static const int	lowGrade = 150;
		static const int	highGrade = 1;
		Bureaucrat(void);

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &toCopy);
		~Bureaucrat(void);
		Bureaucrat &operator = (Bureaucrat const &toCopy);

		const std::string &getName() const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		void signForm(const bool isSigned, const std::string formName);

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

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &toCopy);

#endif
