/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:45:35 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/30 21:58:01 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	init_stack(&ps->a);
	init_stack(&ps->b);
	i = -1;
	while (++i < info->str_cnt)
		push(&ps->a, info->num_arr[i]);
	ps->cmd_cnt = 0;
	ps->cmd_li = NULL;
}

int	check_sorted(t_stack *stack)
{
	t_node	*tmp;
	int		n;

	if (stack->len < 2)
		return (1);
	tmp = stack->head;
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
