/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:53:22 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/30 21:21:00 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*to_array(t_stack *list)
{
	t_node	*tmp;
	int		*arr;
	int		i;

	tmp = list->head;
	arr = malloc(sizeof(int));
	i = -1;
	while (++i < list->len)
	{
		arr[i] = tmp->num;
		tmp = tmp->next;
	}
	return (arr);
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;
	t_node	*node;

	tmp = stack->head;
	while (tmp)
	{
		node = tmp;
		tmp = tmp->next;
		free(node);
	}
}

void	print_stack(t_stack *stack)
{
	t_node	*tmp;

	if (stack->len == 0)
		return ;
	tmp = stack->head;
	ft_printf("head: %d, tail: %d\n", stack->head->num, stack->tail->num);
	ft_printf("list:        ");
	while (tmp)
	{
		ft_printf(" %d", tmp->num);
		tmp = tmp->next;
	}
	ft_printf("\nreverse list:");
	tmp = stack->tail;
	while (tmp)
	{
		ft_printf(" %d", tmp->num);
		tmp = tmp->prev;
	}
	ft_printf("\n\n");
}

void	print_arr(int *arr, t_stack *list)
{
	int	i;

	ft_printf("arr:");
	i = -1;
	while (++i < list->len)
		ft_printf(" %d", arr[i]);
	ft_printf("\n\n");
}
