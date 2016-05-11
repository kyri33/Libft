# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcowle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 09:01:24 by kcowle            #+#    #+#              #
#    Updated: 2016/05/11 09:14:37 by kioulian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_strncmp.c ft_putchar.c ft_putstr.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_toupper.c ft_isprint.c ft_memset.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strrchr.c ft_strstr.c ft_tolower.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar ruv libft.a ft_putchar.o ft_strncmp.o ft_bzero.o ft_putstr.o ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_toupper.o ft_isprint.o ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strrchr.o ft_strstr.o ft_tolower.o
	ranlib libft.a

fclean:
	rm libft.a ft_putchar.o ft_bzero.o ft_strncmp.o ft_putstr.o ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_toupper.o ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strrchr.o ft_strstr.o ft_tolower.o
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar ruv libft.a ft_putchar.o ft_bzero.o ft_strncmp.o ft_putstr.o ft_toupper.o ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlcat.o ft_strlen.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strrchr.o ft_strstr.o ft_tolower.o
	ranlib libft.a
