/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:32:32 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:43:11 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Operator assignment called" << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return _type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal sound" << std::endl;
}