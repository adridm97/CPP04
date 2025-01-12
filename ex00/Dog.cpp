/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:16:06 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:34:44 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
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