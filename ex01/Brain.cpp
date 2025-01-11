/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:49:42 by aduenas-          #+#    #+#             */
/*   Updated: 2024/10/08 20:51:44 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "No idea";
}
Brain::Brain(const Brain &other)
{
    *this = other;
}

Brain& Brain::operator=(const Brain &other)
{
    if (this != &other)
	{
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}
void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}