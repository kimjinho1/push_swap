/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:45 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/27 11:25:31 by jinhokim         ###   ########.fr       */
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

/*
void	print_stack(t_stack *s)
{
	t_node	*t1;
	t_node	*t2;

	t1 = s->a;
	t2 = s->b;
	while (t1 || t2)
	{
		if (t1)
		{
			ft_printf("%-10d", t1->num);
			t1 = t1->next;
		}
		else
			ft_printf("          ");
		if (t2)
		{
			ft_printf("%d", t2->num);
			t2 = t2->next;
		}
		ft_printf("\n");
	}
	ft_printf("-         -\n");
	ft_printf("a         b\n");
	ft_printf("---------------------------\n");
}
*/

void	print_stack(t_stack *s)
{
	t_node	*t;

	t = s->a;
	ft_printf("a:");
	while (t)
	{
		ft_printf(" %d", t->num);
		t = t->next;
	}
	ft_printf("\n");
	t = s->b;
	ft_printf("b:");
	while (t)
	{
		ft_printf(" %d", t->num);
		t = t->next;
	}
	ft_printf("\n\n");
}

void	free_stack(t_stack *s)
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
}

int	check_sorted(t_stack *s)
{
	t_node	*tmp;
	int		n;

	if (!s->a || !s->a->next)
		return (1);
	tmp = s->a;
	n = s->a->num;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (n > tmp->num)
			return (0);
		n = tmp->num;
	}
	return (1);
}
