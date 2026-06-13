# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/21 21:57:37 by slimane           #+#    #+#              #
#    Updated: 2026/06/13 20:22:23 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
CPPFILE =  main.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = tmp

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp whatever.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean : 
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean