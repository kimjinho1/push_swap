#nizize **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 08:48:05 by jinhokim          #+#    #+#              #
#    Updated: 2022/10/03 21:06:01 by jinhokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap

BONUS_NAME		= checker

SRCS			= ./mandatory/main.c \
				  	./mandatory/stack.c \
					./mandatory/stack_utils.c \
					./mandatory/utils.c \
					./mandatory/utils2.c \
					./mandatory/parsing.c \
					./mandatory/init.c \
					./mandatory/op1.c \
					./mandatory/op2.c \
					./mandatory/op3.c \
					./mandatory/sort_5_or_less_1.c \
					./mandatory/sort_5_or_less_2.c \
					./mandatory/sort.c \
					./mandatory/optimize.c \

BONUS_SRCS		= ./bonus/main.c \

HEADER			= ./mandatory/push_swap.h

BONUS_HEADER	= ./bonus/checker.h

CC				= cc
CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

LIBS			= -L ./ft_printf -lftprintf

OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BONUS_SRCS:.c=.o)

$(NAME):		$(OBJS) $(HEADER)
					@make all -C ./ft_printf
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBS)

bonus:			$(BONUS_OBJS) $(BONUS_HEADER)
					@make all -C ./ft_printf
					@$(CC) $(CFLAGS) $(BONUS_OBJS) -o $(BONUS_NAME) $(LIBS)
				

all:			$(NAME)

clean:
				@$(RM) $(OBJS)
				@$(RM) $(BONUS_OBJS)
					@make fclean -C ./ft_printf

fclean:			clean
					@$(RM) $(NAME) $(OBJS)
					@$(RM) $(BONUS_NAME) $(BONUS_OBJS)

re:				fclean all

.PHONY:			bonus all clean fclean re
