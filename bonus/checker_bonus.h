/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:10:58 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 21:54:35 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/ft_printf.h"

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

void			init_stack(t_stack *stack);
void			push_left(t_stack *list, int data);
void			push(t_stack *stack, int data);
int				pop_left(t_stack *stack);
int				pop(t_stack *stack);

int				*to_array(t_stack *list);
void			free_stack(t_stack *stack);
void			print_stack(t_stack *stack);
void			print_arr(int *arr, t_stack *stack);

void			error_exit(void);
void			free_exit(t_info *info);
void			error_free_exit(t_info *info);
void			print_ps(t_ps *ps);
int				check_space(char *s);

int				get_num_count(int ac, char **av);
void			make_num_arr(t_info *info, int ac, char **av);

void			init_arr(t_info *info, int ac, char **av);
void			init_ps(t_info *info, t_ps *ps);
int				check_sorted(t_ps *ps);
void			free_ps(t_ps *ps);

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

int				get_next_line(char **line);

#endif
