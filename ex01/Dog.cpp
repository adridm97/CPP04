/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:16:06 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:38:18 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other)
{
    this->_brain = new Brain(*other._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}
Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}