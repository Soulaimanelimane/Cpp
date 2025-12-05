# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 01:09:36 by slimane           #+#    #+#              #
#    Updated: 2025/12/05 18:19:10 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address
CPPFILE = AForm.cpp  Bureaucrat.cpp  main.cpp  PresidentialPardonForm.cpp  RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp
OBJ = ${CPPFILE:.cpp=.o}

NAME = AForm

all:${NAME}


${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp AForm.hpp  Bureaucrat.hpp  PresidentialPardonForm.hpp  RobotomyRequestForm.hpp  ShrubberyCreationForm.hpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean : 
	rm -f ${OBJ}

fclean:clean 
	rm -f ${NAME}

re:fclean all

.PHONY: clean