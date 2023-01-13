# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgrossi <fgrossi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:36:53 by fgrossi           #+#    #+#              #
#    Updated: 2023/01/13 12:44:06 by fgrossi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLU			= \033[0;34m
GRN			= \033[0;32m
RED			= \033[0;31m
PUR			= \033[0;35m
YLW			= \033[0;33m
RST			= \033[0m
END			= \e[0m

NAME		= PhoneBook

FILES = main.cpp \
				Contact.cpp \
				PhoneBook.cpp

OBJS		= $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./objs/
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

CC			= clang++
CC_FLAGS	= -Wall -Wextra -Werror -I.

$(OBJS_DIR)%.o : %.c
	@mkdir -p $(OBJS_DIR) #"the name of your files directory"
	@$(CC) $(CC_FLAGS) -c $< -o $@
	@printf	"\033[2K\r${GRN}[COMPILING]${RST} '$<' $(END)\n"

$(NAME): $(OBJECTS_PREFIXED)
	@$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(CC_FLAGS)
	@printf "\033[2K\r${PUR}[CREATED]\033[0m $(NAME)$(END)\n"

all: $(NAME)

clean:
	@rm -rf $(addprefix $(OBJS_DIR), $(SRCS_DIR))
	@printf "\033[2K\r${YLW}[CLEAN]${RST} done$(END)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "\033[2K\r${RED}[DESTROYED]${RST} $(NAME)$(END)\n"

re: fclean all

.PHONY:		all clean fclean re