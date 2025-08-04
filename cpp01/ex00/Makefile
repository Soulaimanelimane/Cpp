# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 16:29:32 by slimane           #+#    #+#              #
#    Updated: 2025/08/04 10:49:11 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILE = Zombie.cpp  randomChump.cpp newZombie.cpp main.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = Zombie

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp Zombie.hpp  Zombie.h
	${CPP} ${CPPFLAGS} -c $< -o $@

clean :
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean
