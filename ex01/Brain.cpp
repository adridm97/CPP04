/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:49:42 by aduenas-          #+#    #+#             */
/*   Updated: 2025/01/12 18:37:28 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy operator assignment called.";
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return _ideas[index];
    return "";
}