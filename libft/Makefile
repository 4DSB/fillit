# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olkovale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by olkovale          #+#    #+#              #
#    Updated: 2017/04/20 22:07:37 by olkovale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr \
		ft_memcmp ft_strlen ft_strdup ft_strcpy ft_strncpy ft_strcat \
		ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strnstr \
		ft_strcmp ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum \
		ft_isascii ft_isprint ft_toupper ft_tolower \
		ft_memalloc ft_memdel ft_strnew ft_strdel ft_strclr ft_striter \
		ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ ft_strsub \
		ft_strjoin ft_strtrim ft_strsplit ft_itoa ft_putchar ft_putstr \
		ft_putendl ft_putnbr ft_putchar_fd ft_putstr_fd ft_putendl_fd \
		ft_putnbr_fd ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter \
		ft_lstmap my_strsub ft_count_digits ft_next_word ft_word_copy \
		ft_count_words ft_word_length ft_strrev ft_lstpush ft_strevery \
		ft_lstevery ft_lstrev ft_lstlen
SRCS = $(patsubst %, %.c, $(FILES))
BINS = $(patsubst %, %.o, $(FILES))
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean

%.o : srcs/%.c
	gcc -I. $(FLAGS) -c $<

all: $(NAME)

$(NAME): $(BINS)
	ar rc $(NAME) $(BINS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
