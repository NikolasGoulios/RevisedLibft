# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/27 23:49:21 by ngoulios          #+#    #+#              #
#    Updated: 2024/08/25 20:12:05 by ngoulios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
       ft_putunsigned.c\
       ft_puthexa.c \
       ft_putaddress.c \
       ft_printf.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_strmapi.c \
       ft_strtrim.c \
       ft_striteri.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_substr.c \
       ft_split.c \
       ft_strrchr.c \
       ft_itoa.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

SOURCES_BONUS = ft_lstnew_bonus.c \
                ft_lstadd_front_bonus.c \
                ft_lstsize_bonus.c \
                ft_lstlast_bonus.c \
                ft_lstadd_back_bonus.c \
                ft_lstdelone_bonus.c \
                ft_lstclear_bonus.c \
                ft_lstiter_bonus.c \
                ft_lstmap_bonus.c 

BONUS_OBJECTS = $(SOURCES_BONUS:%.c=%.o)

bonus: .bonus
.bonus: $(NAME) $(BONUS_OBJECTS)
	ar -rcs  $(NAME) $(BONUS_OBJECTS)
	@touch .bonus


$(NAME): $(OBJS)
	$(CC) -c $(CFLAGS) $(SRCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(BONUS_OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f .bonus

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus
