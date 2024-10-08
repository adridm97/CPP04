/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:46:53 by adrian            #+#    #+#             */
/*   Updated: 2024/10/07 17:59:51 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
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