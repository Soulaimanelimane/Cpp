# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 01:09:36 by slimane           #+#    #+#              #
#    Updated: 2025/09/08 01:14:58 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CPPFILE = main.cpp Animal.cpp  Cat.cpp  Dog.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = Animal

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