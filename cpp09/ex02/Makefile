# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/20 04:49:44 by slimane           #+#    #+#              #
#    Updated: 2026/06/29 16:53:41 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CPPFLAGS = -Wall -Wextra -Werror #-std=c++98 -fsanitize=address -g3
CPPFILE =  main.cpp PmergeMe.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = PmergeMe

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp PmergeMe.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean : 
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean