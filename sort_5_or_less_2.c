/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:44:59 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/01 22:12:00 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_ps *ps)
{
	if (ps->a->head->num > ps->a->head->next->num)
		sa(ps);
}

static void	sort_3_2(int *arr, t_ps *ps)
{
	if (arr[0] < arr[1])
		rra(ps);
	else
	{
		sa(ps);
		rra(ps);
	}
}

void	sort3(t_ps *ps)
{
	int	*arr;

	if (check_sorted(ps))
		return ;
	arr = to_array(ps->a);
	if (arr[0] < arr[1] && arr[0] < arr[2])
	{
		sa(ps);
		ra(ps);
	}
	else if (arr[1] < arr[0] && arr[1] < arr[2])
	{
		if (arr[0] < arr[2])
			sa(ps);
		else
			ra(ps);
	}
	else
		sort_3_2(arr, ps);
	free(arr);
}
