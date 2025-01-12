/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:34:48 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:43:28 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Operator assignment called" << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}