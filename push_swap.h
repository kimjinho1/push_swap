/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:41:23 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/30 21:55:21 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

# define SA		0
# define SB		1
# define SS		2
# define PA		3
# define PB		4
# define RA		5
# define RB		6
# define RR		7
# define RRA	8
# define RRB	9
# define RRR	10

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
	struct s_node	*prev;
}				t_node;

typedef struct s_stack {
	int		len;
	t_node	*head;
	t_node	*tail;
}				t_stack;

typedef struct s_ps
{
	t_stack	a;
	t_stack	b;
	int		cmd_cnt;
	char	**cmd_li;
}				t_ps;

// stack
void			init_stack(t_stack *stack);
void			push_left(t_stack *list, int data);
void			push(t_stack *list, int data);
int				pop_left(t_stack *list);
int				pop(t_stack *list);

int				*to_array(t_stack *list);
void			free_stack(t_stack *stack);
void			print_stack(t_stack *list);
void			print_arr(int *arr, t_stack *list);

//utils
void			error_exit(void);
void			free_exit(t_info *info);

//parsing
int				get_num_count(int ac, char **av);
void			make_num_arr(t_info *info, int ac, char **av);

//init
void			init_arr(t_info *info, int ac, char **av);
void			init_ps(t_info *info, t_ps *ps);
int				check_sorted(t_stack *s);
void			print_ps(t_ps *ps);
void			free_ps(t_ps *ps);

/*
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
void			print_all_cmd(t_stack *s);
void			cmd_update(t_stack *s, int n, void (*f)(t_stack *));

void			sort(t_info *info, t_stack *s);
*/

#endif
