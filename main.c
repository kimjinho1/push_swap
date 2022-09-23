/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 22:49:46 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a(void)
{
	system("leaks push_swap");
}

t_node	*fill_a(t_info *info)
{
	int		i;
	t_node	*head;
	t_node	*node;

	i = 0;
	head = (t_node *)malloc(sizeof(t_node));
	head->num = info->num_arr[i];
	head->next = NULL;
	while (++i < info->str_cnt)
	{
		node = (t_node *)malloc(sizeof(t_node));
		node->num = info->num_arr[i];
		node->next = head;
		head = node;
	}
	return (head);
}

int	main(int ac, char **av)
{
	atexit(a);
	t_info	info;
	t_node	*a;
	t_node	*tmp;
	int		i;

	init(&info, ac, av);
	i = -1;
	while (++i < info.str_cnt)
		ft_printf("%d ", info.num_arr[i]);
	ft_printf("\ninit finish\n\n");
	a = fill_a(&info);
	tmp = a;
	while (tmp)
	{
		ft_printf("%d ", tmp->num);
		tmp = tmp->next;
	}
	ft_printf("\na fill finish\n\n");
	free_info(&info);
	free_stack(a);
	return (0);
}
