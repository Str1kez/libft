# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tnessrou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 21:02:12 by tnessrou          #+#    #+#              #
#    Updated: 2021/04/26 21:02:15 by tnessrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR 		= ./
LIST_FILES	= 	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memccpy.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_split.c \
				ft_strchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

GCC 		= gcc
OBJS		= $(LIST_FILES:.c=.o)
FLAGS		= -Wall -Wextra -Werror
NAME		= libft

.c.o: 
	${GCC} ${FLAGS} -c $< -o $@

all: $(NAME).a

$(NAME) : all

$(NAME).a: $(OBJS)
	ar rc $(NAME).a $(OBJS)

clean:
	rm -rf $(NAME).a

fclean: clean
	rm -rf $(OBJS)

re: fclean all	

.PHONY: all, re, clean, $(NAME), fclean
