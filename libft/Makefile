# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amittal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by amittal           #+#    #+#              #
#    Updated: 2017/07/01 23:07:12 by amittal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard srcs/*.c)
BINS = $(patsubst srcs/%.c, %.o, $(SRCS))
FLAGS = -Wall -Wextra -Werror

.PHONY: re all clean fclean

%.o : 
	gcc -Iincludes $(FLAGS) -c $(SRCS)

all: $(NAME)

$(NAME): $(BINS)
	ar rc $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
