/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:46 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 17:00:55 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/span.hpp"

int main(void)
{
	Span sp(5);

	sp.addNumber(5);
	sp.addNumber(2);
	sp.addNumber(4);
	sp.addNumber(3);
	sp.addNumber(1);

	std::cout << sp;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sp.addNumber(5);
		sp.addNumber(10);
		std::cout << sp;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		sp.addNumber(11);
		std::cout << sp;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(11);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
		std::cout << sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	Span spp(10);
	spp.autofill();
	std::cout << spp;
	std::cout << spp.shortestSpan() << std::endl;
	std::cout << spp;
	std::cout << spp.longestSpan() << std::endl;
	std::cout << std::endl;

	return 0;
}