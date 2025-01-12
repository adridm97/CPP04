/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:17:35 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:29:35 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Operator assignment Cat called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}