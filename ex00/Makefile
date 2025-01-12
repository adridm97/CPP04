# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 19:36:48 by adrian            #+#    #+#              #
#    Updated: 2025/01/11 17:51:57 by aduenas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SOURCES	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	= ${SOURCES:.cpp=.o}
HEADERS	= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all: $(NAME) Makefile
$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)
%.o: %.cpp Makefile $(HEADERS)
	$(CPP) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re