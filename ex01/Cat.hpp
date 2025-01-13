/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:17:00 by adrian            #+#    #+#             */
/*   Updated: 2025/01/13 19:43:12 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        virtual ~Cat();
        virtual void makeSound() const;
        void setIdea(int index, const std::string &idea)
        {
            if (_brain)
                _brain->setIdea(index, idea);
        }
        std::string getIdea(int index) const
        {
            if (_brain)
                return (_brain->getIdea(index));
            else
                return "no brain to get ideas.";
        }
};

#endif