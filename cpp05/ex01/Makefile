# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 01:09:36 by slimane           #+#    #+#              #
#    Updated: 2025/12/02 19:33:53 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address
CPPFILE = main.cpp  Bureaucrat.cpp Form.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = Form

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp Bureaucrat.hpp  Form.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean : 
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean