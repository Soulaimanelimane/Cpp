# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/29 18:54:59 by slimane           #+#    #+#              #
#    Updated: 2025/07/31 16:59:17 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++
CPPFLAGS= -Wall -Wextra -Werror  -std=c++98 -g -fsanitize=address

CPPFILE= main.cpp functions.cpp
OBJ= ${CPPFILE:.cpp=.o}

NAME=PhoneBook

all:${NAME}

${NAME}:${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp  PhoneBook.hpp Contact.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re:fclean all
.PHONY:clean