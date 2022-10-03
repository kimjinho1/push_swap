#nizize **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 08:48:05 by jinhokim          #+#    #+#              #
#    Updated: 2022/10/03 19:05:20 by jinhokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap

SRCS			= main.c \
				  	stack.c \
					stack_utils.c \
					utils.c \
					parsing.c \
					init.c \
					op1.c \
					op2.c \
					op3.c \
					sort_5_or_less_1.c \
					sort_5_or_less_2.c \
					sort.c \
					optimize.c \

HEADER			= push_swap.h

CC				= cc
CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

LIBS			= -L ./ft_printf -lftprintf

OBJS			= $(SRCS:.c=.o)

$(NAME):		$(OBJS) $(HEADER)
					@make all -C ./ft_printf
					@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBS)

all:			$(NAME)

clean:
				@$(RM) $(OBJS)
					@make fclean -C ./ft_printf

fclean:			clean
					@$(RM) $(NAME) $(OBJS)

re:				fclean all

.PHONY:			bonus all clean fclean re
