# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimane <slimane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 11:34:39 by slimane           #+#    #+#              #
#    Updated: 2025/10/07 16:32:43 by slimane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++    
CPPFLAGS = -Wall -Wextra -Werror -std=c++98   
CPPFILE = main.cpp Line.cpp proccess.cpp   
OBJ = ${CPPFILE:.cpp=.o}
          
NAME = Line
                 
all:${NAME}
     
    
${NAME} : ${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}
    
%.o:%.cpp %.h %.hpp 
	${CPP} ${CPPFLAGS} -c $< -o $@
   
clean  : 
	rm -f ${OBJ}
   
fclean:clean 
	rm -f ${NAME}

re:fclean all
    
.PHONY: clean