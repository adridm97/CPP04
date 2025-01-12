/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrian <adrian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:42:46 by aduenas-          #+#    #+#             */
/*   Updated: 2025/01/12 18:37:38 by adrian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
        
    public:
        Brain();
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};

#endif