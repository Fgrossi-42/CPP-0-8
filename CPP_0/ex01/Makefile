# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:36:53 by fgrossi           #+#    #+#              #
#    Updated: 2023/01/13 12:59:55 by fgrossi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=./src/main.cpp \
				./src/Contact.cpp \
				./src/PhoneBook.cpp
				
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -rf
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= PhoneBook

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				mkdir OBJS
				mv $(OBJS) OBJS

clean:
				$(RM) OBJS

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test