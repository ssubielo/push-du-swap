# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 11:31:56 by ssubielo          #+#    #+#              #
#    Updated: 2022/06/19 23:05:17 by ssubielo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = push_swap

SRCS = ft_bzero.c \
       ft_parce_one.c \
       ft_rules_one.c \
       ft_sort_six_or_more.c \
       ft_calloc.c \
       ft_parce_three.c \
       ft_rules_three.c \
       ft_sort_six_or_more_c.c \
       ft_error.c \
       ft_parce_two_b.c \
       ft_rules_two.c \
       ft_split.c \
       ft_free.c  \
       ft_parce_two.c \
       ft_sort_five_and_three.c \
       ft_strlen.c \
       ft_memset.c \
       ft_putstr.c \
       ft_sort_six_or_more_b.c \
       ft_sort_new.c \
       pushswap.c \

LIB = pushswap_utils.h \

RM = rm -f

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(LIB) $(OBJS)	

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
