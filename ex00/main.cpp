/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:35:42 by adrian            #+#    #+#             */
/*   Updated: 2025/01/11 18:14:19 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal		*animal;
    const Animal		*dog;
    const Animal		*cat;
    const WrongAnimal	*wrongAnimal;
    const WrongAnimal	*wrongCat;

    animal = new Animal();
    dog = new Dog();
    cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();
    animal->makeSound();

    wrongAnimal = new WrongAnimal();
	wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();
    wrongAnimal->makeSound();

    delete animal;
    delete dog;
    delete cat;
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}