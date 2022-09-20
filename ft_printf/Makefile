# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 08:49:04 by jinhokim          #+#    #+#              #
#    Updated: 2022/09/20 08:57:20 by jinhokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ./ft_printf.c \
			  ./utils.c ./print_char.c ./print_nbr.c ./print_str.c

OBJS		= $(SRCS:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

NAME		= libftprintf.a

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I .

$(NAME) : $(OBJS)
	@make all -C ./libft 
	@cp ./libft/libft.a $(NAME)
	@ar rc $(NAME) $(OBJS)

all : $(NAME)

clean :
	@$(RM) $(OBJS)
	@make clean -C ./libft

fclean : 
	@$(RM) $(OBJS)
	@make fclean -C ./libft
	@$(RM) $(NAME)

re : fclean all

.PHONY:	all clean fclean re
