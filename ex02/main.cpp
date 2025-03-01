/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:18:59 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/01 20:48:28 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";

	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "The address of string   : "
			  << &string
			  << std::endl;

	std::cout << "The address held by PTR : "
			  << stringPTR
			  << std::endl;

	std::cout << "The address held by REF : "
			  << &stringREF
			  << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string         : "
			  << string
			  << std::endl;

	std::cout << "Value pointed to by PTR : "
			  << (*stringPTR)
			  << std::endl;

	std::cout << "Value pointed to by REF : "
			  << stringREF
			  << std::endl;
}
