/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:46:53 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:36:45 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal operator assignment called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
std::string Animal::getType() const
{
    return _type;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}