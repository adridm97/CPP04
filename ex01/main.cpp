/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:35:42 by adrian            #+#    #+#             */
/*   Updated: 2025/01/13 19:47:33 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* animals[4];
    
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();
    Cat *tom = dynamic_cast<Cat *>(animals[1]);
    if (tom)
    {
        tom->setIdea(0, "hunt jerry");
        std::cout << "tom have an idea: " << tom->getIdea(0) << std::endl;
    }
    for (int i = 0; i < 4; ++i)
        animals[i]->makeSound();
    for (int i = 0; i < 4; ++i)
        delete animals[i];
    return 0;
}