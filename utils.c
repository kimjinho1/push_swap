/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:45 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/30 21:55:18 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_exit(t_info *info)
{
	free(info->num_arr);
	exit(EXIT_FAILURE);
}

void	print_ps(t_ps *ps)
{
	t_node	*t1;
	t_node	*t2;

	t1 = ps->a.tail;
	t2 = ps->b.tail;
	while (t1 || t2)
	{
		if (t1)
		{
			ft_printf("%-10d", t1->num);
			t1 = t1->prev;
		}
		else
			ft_printf("          ");
		if (t2)
		{
			ft_printf("%d", t2->num);
			t2 = t2->prev;
		}
		ft_printf("\n");
	}
	ft_printf("-         -\n");
	ft_printf("a         b\n");
	ft_printf("---------------------------\n\n");
}

void	free_ps(t_ps *ps)
{
	free_stack(&ps->a);
	free_stack(&ps->b);
}

/*
void	free_ps(t_stack *s)
{
	t_node	*tmp;
	t_node	*node;

	tmp = s->a;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
		free(node);
	}
	tmp = s->b;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
		free(node);
	}
	tmp = s->cmd_li;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
		free(node);
	}
}
*/
