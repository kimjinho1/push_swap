/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:24:42 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/01 22:21:53 by jinhokim         ###   ########.fr       */
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
			pb(ps);
			break ;
		}
		else
			ra(ps);
	}
	sort3(ps);
	pa(ps);
}

void	sort5(t_ps *ps)
{
	int		i;
	int		pb_i;
	int		m;

	i = -1;
	pb_i = 0;
	m = get_median(ps->a);
	while (++i < 5)
	{
		if (ps->a->head->num < m)
		{
			pb(ps);
			pb_i++;
			if (pb_i == 2)
				break ;
		}
		else
			ra(ps);
	}
	sort3(ps);
	pa(ps);
	pa(ps);
	if (ps->a->head->num > ps->a->head->next->num)
		sa(ps);
}

void	sort_5_or_less(t_info *info, t_ps *ps)
{
	if (info->str_cnt == 2)
		sort2(ps);
	else if (info->str_cnt == 3)
		sort3(ps);
	else if (info->str_cnt == 4)
		sort4(ps);
	else if (info->str_cnt == 5)
		sort5(ps);
}
