CPP =c++
CPPFLAGS = -Wall -Wextra -Werror  -std=c++98
CPPFILE = megaphone.cpp 

OBJ=${CPPFILE:.cpp=.o} 

NAME=megaphone


all:${NAME}


${NAME}:${OBJ}
	${CPP} ${CPPFLAGS} ${OBJ} -o ${NAME}

%.o:%.cpp
	${CPP} ${CPPFLAGS} -c $< -o $@

clean: 
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re:fclean all 

.PHONY:clean