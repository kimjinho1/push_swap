/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:55:53 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 23:34:43 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	init_arr(t_info *info, int ac, char **av)
{
	if (ac < 2)
		exit(EXIT_FAILURE);
	info->str_cnt = get_num_count(ac, av);
	info->parse_cnt = 0;
	make_num_arr(info, ac, av);
}

void	init_ps(t_info *info, t_ps *ps)
{
	int		i;

	ps->a = (t_stack *)malloc(sizeof(t_stack));
	ps->b = (t_stack *)malloc(sizeof(t_stack));
	ps->cmd_stack = (t_stack *)malloc(sizeof(t_stack));
	init_stack(ps->a);
	init_stack(ps->b);
	init_stack(ps->cmd_stack);
	i = -1;
	while (++i < info->str_cnt)
		push(ps->a, info->num_arr[i]);
	ps->cmd_cnt = 0;
	ps->op_flag = 1;
}

int	check_sorted(t_ps *ps)
{
	t_node	*tmp;
	int		n;

	if (ps->a->len < 2)
		return (1);
	if (ps->b->len > 0)
		return (0);
	tmp = ps->a->head;
	n = tmp->num;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (n > tmp->num)
			return (0);
		n = tmp->num;
	}
	return (1);
}

void	free_ps(t_ps *ps)
{
	free_stack(ps->a);
	free_stack(ps->b);
	free_stack(ps->cmd_stack);
}
