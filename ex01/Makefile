# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aduenas- <aduenas-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 19:36:48 by adrian            #+#    #+#              #
#    Updated: 2025/01/11 22:14:45 by aduenas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
SOURCES	= main.cpp Brain.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	= ${SOURCES:.cpp=.o}
HEADERS	= Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

%.o: %.cpp Makefile $(HEADERS)
	$(CPP) $(CFLAGS) -c $< -o $@
all: $(NAME) Makefile
$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: all clean fclean re