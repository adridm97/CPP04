/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:34:48 by adrian            #+#    #+#             */
/*   Updated: 2025/01/11 22:27:09 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
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
        type = other.type;
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