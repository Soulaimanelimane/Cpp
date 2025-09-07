# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 19:52:10 by slimane           #+#    #+#              #
#    Updated: 2025/09/08 00:22:04 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILE = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = FragTrap

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp %.h %.hpp 
	${CPP} ${CPPFLAGS} -c $< -o $@

clean : 
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean