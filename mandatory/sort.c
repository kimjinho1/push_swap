/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:51:08 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 18:50:34 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_ps *ps, int i, int chunk)
{
	while (ps->a->len > 0)
	{
		if (ps->a->head->num <= i)
		{
			cmd_update(ps, 4, pb);
			i++;
		}
		else if (ps->a->head->num > i && ps->a->head->num <= i + chunk)
		{
			cmd_update(ps, 4, pb);
			cmd_update(ps, 6, rb);
			i++;
		}
		else
			cmd_update(ps, 5, ra);
	}
}

static int	get_stack_idx(t_stack *stack, int n)
{
	t_node	*tmp;
	int		i;

	tmp = stack->head;
	i = 0;
	while (tmp && tmp->num != n)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

static void	max_to_top(t_ps *ps)
{
	int	max;
	int	max_idx;

	max = get_max(ps->b);
	max_idx = get_stack_idx(ps->b, max);
	if (max_idx < ps->b->len / 2)
	{
		while (ps->b->head->num != max)
			cmd_update(ps, 6, rb);
	}
	else
	{
		while (ps->b->head->num != max)
			cmd_update(ps, 9, rrb);
	}
}

void	b_to_a(t_ps *ps)
{
	while (ps->b->len > 0)
	{
		max_to_top(ps);
		cmd_update(ps, 3, pa);
	}
}
