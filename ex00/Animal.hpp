/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:17:19 by adrian            #+#    #+#             */
/*   Updated: 2025/01/11 22:27:56 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:  
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif