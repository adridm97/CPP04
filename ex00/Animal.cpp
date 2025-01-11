/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:46:53 by adrian            #+#    #+#             */
/*   Updated: 2025/01/11 17:53:46 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &other)
{
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = other;
}
Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Operator assignment Animal called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
std::string Animal::getType() const
{
    return type;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}