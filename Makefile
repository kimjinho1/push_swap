# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 08:48:05 by jinhokim          #+#    #+#              #
#    Updated: 2022/09/23 20:48:52 by jinhokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap

SRCS			= main.c \
					utils.c \
					parsing.c \
					init.c \

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
