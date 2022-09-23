/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 21:48:23 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	a(void)
{
	system("leaks push_swap");
}
*/

void	fill_a(t_info *info, t_node *a)
{
	int		i;
	t_node	*node;
	t_node	*prev;
	t_node	*curr;

	i = 0;
	a = (t_node *)malloc(sizeof(t_node));
	a->num = info->num_arr[i];
	a->next = NULL;
	prev = a;
	while (++i < info->str_cnt)
	{
		node = (t_node *)malloc(sizeof(t_node));
		node->num = info->num_arr[i];
		node->next = prev;
		prev = node;
	}
	curr = (t_node *)malloc(sizeof(t_node));
	curr = prev;
	while (curr)
	{
		ft_printf("%d ", curr->num);
		curr = curr->next;
	}
}

int	main(int ac, char **av)
{
	//atexit(a);
	t_info	info;
	t_node	a;
	int		i;

	i = -1;
	init(&info, ac, av);
	while (++i < info.str_cnt)
		ft_printf("%d ", info.num_arr[i]);
	ft_printf("\ninit finish\n\n");
	fill_a(&info, &a);
	ft_printf("\na fill finish\n\n");
	//free_info(&info);
	return (0);
}
