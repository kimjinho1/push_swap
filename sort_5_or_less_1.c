/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:24:42 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/02 20:06:22 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_median(t_stack *stack)
{
	int	*arr;
	int	n;

	arr = to_array(stack);
	quick_sort(arr, 0, stack->len - 1);
	n = arr[stack->len / 2];
	free(arr);
	return (n);
}

int	get_min(t_stack *stack)
{
	int	*arr;
	int	n;

	arr = to_array(stack);
	quick_sort(arr, 0, stack->len - 1);
	n = arr[0];
	free(arr);
	return (n);
}

void	sort4(t_ps *ps)
{
	int	i;
	int	min;

	i = -1;
	min = get_min(ps->a);
	while (++i < 4)
	{
		if (ps->a->head->num == min)
		{
			cmd_update(ps, 4, pb);
			break ;
		}
		else
			ra(ps);
	}
	sort3(ps);
	cmd_update(ps, 3, pa);
}

void	sort5(t_ps *ps)
{
	int		i;
	int		pb_i;
	int		m;

	i = -1;
	pb_i = 0;
	m = get_median(ps->a);
	while (++i < 5 && pb_i < ps->a->len / 2)
	{
		if (ps->a->head->num < m)
		{
			cmd_update(ps, 4, pb);
			pb_i++;
		}
		else
			cmd_update(ps, 5, ra);
	}
	sort3(ps);
	cmd_update(ps, 3, pa);
	cmd_update(ps, 3, pa);
	if (ps->a->head->num > ps->a->head->next->num)
		cmd_update(ps, 0, sa);
}

void	sort_5_or_less(t_ps *ps)
{
	if (ps->a->len == 2)
		sort2(ps);
	else if (ps->a->len == 3)
		sort3(ps);
	else if (ps->a->len == 4)
		sort4(ps);
	else if (ps->a->len == 5)
		sort5(ps);
}
