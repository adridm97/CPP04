/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:17:00 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:33:31 by adrian           ###   ########.fr       */
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
};

#endif