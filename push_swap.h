/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:41:23 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/02 20:59:43 by jinhokim         ###   ########.fr       */
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
	t_stack	*a;
	t_stack	*b;
	t_stack	*cmd_stack;
	int		cmd_cnt;
}				t_ps;

// stack
void			init_stack(t_stack *stack);
void			push_left(t_stack *list, int data);
void			push(t_stack *stack, int data);
int				pop_left(t_stack *stack);
int				pop(t_stack *stack);

int				*to_array(t_stack *list);
void			free_stack(t_stack *stack);
void			print_stack(t_stack *stack);
void			print_arr(int *arr, t_stack *stack);

//utils
void			error_exit(void);
void			free_exit(t_info *info);
void			error_free_exit(t_info *info);
void			print_ps(t_ps *ps);
void			swap(int *n1, int *n2);

//parsing
int				get_num_count(int ac, char **av);
void			make_num_arr(t_info *info, int ac, char **av);

//init
void			init_arr(t_info *info, int ac, char **av);
void			init_ps(t_info *info, t_ps *ps);
int				check_sorted(t_ps *ps);
void			free_ps(t_ps *ps);

//op
void			sa(t_ps *ps);
void			sb(t_ps *ps);
void			ss(t_ps *ps);
void			pa(t_ps *ps);
void			pb(t_ps *ps);
void			ra(t_ps *ps);
void			rb(t_ps *ps);
void			rr(t_ps *ps);
void			rra(t_ps *ps);
void			rrb(t_ps *ps);
void			rrr(t_ps *ps);

void			print_all_cmd(t_stack *cmd_stack);
void			cmd_update(t_ps *ps, int n, void (*f)(t_ps *));

//sort_under_5
void			quick_sort(int *arr, int start, int end);
int				get_median(t_stack *stack);
int				get_min(t_stack *stack);
void			sort2(t_ps *ps);
void			sort3(t_ps *ps);
void			sort4(t_ps *ps);
void			sort5(t_ps *ps);
void			sort_5_or_less(t_ps *ps);

//sort

#endif
