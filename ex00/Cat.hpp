/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:17:00 by adrian            #+#    #+#             */
/*   Updated: 2025/01/12 18:29:46 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

    class Cat : public Animal
    {
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        virtual ~Cat();
        virtual void makeSound() const;
    };

#endif