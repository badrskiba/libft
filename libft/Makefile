# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bskiba <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 12:30:54 by bskiba            #+#    #+#              #
#    Updated: 2016/11/11 19:29:42 by bskiba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJET_NAME = $(SRC_NAME:.c=.o)
PATH_INC = ./includes
CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC_NAME =  ft_isdigit.c ft_memcpy.c ft_strclr.c ft_striteri.c \
			ft_strncat.c ft_strrchr.c ft_atoi.c ft_isprint.c \
			ft_memdel.c ft_strcmp.c ft_strjoin.c ft_strncmp.c \
			ft_strstr.c ft_bzero.c ft_memalloc.c ft_memmove.c \
			ft_strcpy.c ft_strlcat.c ft_strncpy.c ft_strsub.c \
			ft_isalnum.c ft_memccpy.c ft_memset.c ft_strdel.c \
			ft_strlen.c ft_strnequ.c ft_strtrim.c ft_isalpha.c \
			ft_memchr.c ft_strcat.c ft_strequ.c ft_strmap.c \
			ft_strnew.c ft_isascii.c ft_memcmp.c ft_strchr.c \
			ft_striter.c ft_strmapi.c ft_strnstr.c ft_strdup.c \
			ft_toupper.c ft_tolower.c \

all: $(NAME)

$(NAME) : $(OBJET_NAME)
	ar r $(NAME) $(OBJET_NAME)

%.o : %.c
	$(CC) $(FLAGS) -c -I $(PATH_INC) $<

clean:
	rm -rf $(SRC_NAME:.c=.o)

fclean: clean
	rm -rf $(NAME);

re: fclean all

