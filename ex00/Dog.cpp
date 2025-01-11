/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:16:06 by adrian            #+#    #+#             */
/*   Updated: 2025/01/11 22:26:40 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog &other)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = other;
}
Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Operator assignment Dog called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}