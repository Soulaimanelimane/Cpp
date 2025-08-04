# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 11:48:24 by slimane           #+#    #+#              #
#    Updated: 2025/08/04 12:42:21 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILE = Weapon.cpp main.cpp HumanA.cpp   HumanB.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = Weapon

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
