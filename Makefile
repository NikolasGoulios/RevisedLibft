# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 23:49:21 by ngoulios          #+#    #+#              #
#    Updated: 2024/09/23 17:45:35 by ngoulios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./

# **************************************************************************** #
#                                 Source Files                                 #
# **************************************************************************** #


SRC_CTYPE = ctype/ft_isalnum.c \
            ctype/ft_isalpha.c \
            ctype/ft_isascii.c \
            ctype/ft_isdigit.c \
            ctype/ft_isprint.c \
            ctype/ft_tolower.c \
            ctype/ft_toupper.c


SRC_MEMORY = memory/ft_memset.c \
             memory/ft_memcpy.c \
             memory/ft_memmove.c \
             memory/ft_memcmp.c \
             memory/ft_memchr.c \
             memory/ft_bzero.c \
             memory/ft_calloc.c


SRC_STRING = string/ft_strlen.c \
             string/ft_strncmp.c \
             string/ft_strnstr.c \
             string/ft_strdup.c \
             string/ft_strchr.c \
             string/ft_strlcpy.c \
             string/ft_strlcat.c \
             string/ft_strjoin.c \
             string/ft_split.c \
             string/ft_strtrim.c \
             string/ft_substr.c \
             string/ft_strmapi.c \
             string/ft_strrchr.c \
             string/ft_striteri.c


SRC_MATH =  math/ft_atoi.c \
            math/ft_itoa.c


SRC_OUTPUT = output/ft_putchar_fd.c \
             output/ft_putstr_fd.c \
             output/ft_putendl_fd.c \
             output/ft_putnbr_fd.c \
             output/ft_printf.c \
             output/ft_putaddress.c \
             output/ft_puthexa.c \
             output/ft_putchar.c \
             output/ft_putnbr.c \
             output/ft_putstr.c \
             output/ft_putunsigned.c


SRC_LIST =  list/ft_lstnew_bonus.c \
            list/ft_lstadd_front_bonus.c \
            list/ft_lstsize_bonus.c \
            list/ft_lstlast_bonus.c \
            list/ft_lstadd_back_bonus.c \
            list/ft_lstdelone_bonus.c \
            list/ft_lstclear_bonus.c \
            list/ft_lstiter_bonus.c \
            list/ft_lstmap_bonus.c


SRC_GNL =   gnl/get_next_line.c


SRCS = $(SRC_CTYPE) $(SRC_MEMORY) $(SRC_STRING) $(SRC_MATH) $(SRC_OUTPUT) $(SRC_LIST) $(SRC_GNL)


OBJS = $(SRCS:.c=.o)


HEADER = libft.h

# **************************************************************************** #
#                                 Makefile Rules                               #
# **************************************************************************** #


all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)


fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re
