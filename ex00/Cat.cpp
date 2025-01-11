/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:17:35 by adrian            #+#    #+#             */
/*   Updated: 2025/01/11 22:26:18 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
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