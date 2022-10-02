/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:44:59 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/02 18:26:54 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick_sort(int *arr, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	if (start >= end)
		return ;
	pivot = start;
	i = pivot + 1;
	j = end;
	while (i <= j)
	{
		while (i <= end && arr[i] <= arr[pivot])
			i++;
		while (j > start && arr[j] >= arr[pivot])
			j--;
		if (i > j)
			swap(&arr[j], &arr[pivot]);
		else
			swap(&arr[i], &arr[j]);
	}
	quick_sort(arr, start, j - 1);
	quick_sort(arr, j + 1, end);
}

void	sort2(t_ps *ps)
{
	if (ps->a->head->num > ps->a->head->next->num)
		cmd_update(ps, 0, sa);
}

static void	sort_3_2(int *arr, t_ps *ps)
{
	if (arr[0] < arr[1])
		cmd_update(ps, 8, rra);
	else
	{
		cmd_update(ps, 0, sa);
		cmd_update(ps, 8, rra);
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
		cmd_update(ps, 0, sa);
		cmd_update(ps, 5, ra);
	}
	else if (arr[1] < arr[0] && arr[1] < arr[2])
	{
		if (arr[0] < arr[2])
			cmd_update(ps, 0, sa);
		else
			cmd_update(ps, 5, ra);
	}
	else
		sort_3_2(arr, ps);
	free(arr);
}
