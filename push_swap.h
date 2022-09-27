/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:41:23 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/27 10:06:01 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_info
{
	int			str_cnt;
	int			parse_cnt;
	int			*num_arr;
}				t_info;

typedef struct s_node
{
	int				num;
	struct s_node	*next;
}				t_node;

typedef struct s_stack
{
	t_node	*a;
	t_node	*a_tail;
	t_node	*b;
	t_node	*b_tail;
}				t_stack;

void			error_exit(void);
void			free_exit(t_info *info);
void			free_stack(t_stack *s);
void			print_stack(t_stack *s);
int				check_sorted(t_stack *s);

int				get_num_count(int ac, char **av);
void			make_num_arr(t_info *info, int ac, char **av);

void			init_arr(t_info *info, int ac, char **av);
void			init_stack(t_info *info, t_stack *s);

void			sa(t_stack *s);
void			sb(t_stack *s);
void			ss(t_stack *s);
void			pa(t_stack *s);
void			pb(t_stack *s);

void			ra(t_stack *s);
void			rb(t_stack *s);
void			rr(t_stack *s);
void			rra(t_stack *s);
void			rrb(t_stack *s);

void			rrr(t_stack *s);

#endif
