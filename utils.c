/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:45 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/26 18:42:31 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	print_stack(t_stack *s)
{
	t_node	*tmp;

	tmp = s->a;
	ft_printf("a: ");
	while (tmp)
	{
		if (tmp->num)
			ft_printf("%d ", tmp->num);
		tmp = tmp->next;
	}
	ft_printf("\nb: ");
	tmp = s->b;
	while (tmp)
	{
		if (tmp->num)
			ft_printf("%d ", tmp->num);
		tmp = tmp->next;
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
