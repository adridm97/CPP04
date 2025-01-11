/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:35:42 by adrian            #+#    #+#             */
/*   Updated: 2024/10/08 21:14:03 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    delete dog;
    delete cat;

    Dog dog1;
    Dog dog2 = dog1;
    dog1.makeSound();
    dog2.makeSound();

    Cat cat1;
    Cat cat2 = cat1;
    cat1.makeSound();
    cat2.makeSound();

    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    for (int i = 0; i < 4; i++)
        delete animals[i];
    return 0;
}