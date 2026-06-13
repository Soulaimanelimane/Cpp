# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/24 23:07:21 by slimane           #+#    #+#              #
#    Updated: 2026/06/11 15:02:21 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
CPPFILE = Serializer.cpp  main.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = Serializer

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp Serializer.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean : 
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean