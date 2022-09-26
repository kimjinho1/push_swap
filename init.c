/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:45:35 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/26 21:28:17 by jinhokim         ###   ########.fr       */
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

static t_node	*fill_a(t_info *info)
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

void	init_stack(t_info *info, t_stack *s)
{
	s->a = fill_a(info);
	s->b = NULL;
}
