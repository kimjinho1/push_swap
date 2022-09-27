/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:45:35 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/27 11:34:09 by jinhokim         ###   ########.fr       */
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

static void	*fill_a(t_info *info, t_stack *s)
{
	int		i;
	t_node	*head;
	t_node	*tmp;
	t_node	*node;

	i = 0;
	head = (t_node *)malloc(sizeof(t_node));
	head->num = info->num_arr[i];
	head->next = NULL;
	tmp = head;
	while (++i < info->str_cnt)
	{
		node = (t_node *)malloc(sizeof(t_node));
		node->num = info->num_arr[i];
		tmp->next = node;
		tmp = node;
	}
	tmp->next = NULL;
	s->a = head;
	s->a_tail = tmp;
	return (0);
}

void	init_stack(t_info *info, t_stack *s)
{
	fill_a(info, s);
	s->b = NULL;
	s->b_tail = s->b;
}
