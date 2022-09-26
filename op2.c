/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:32:05 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/26 21:45:06 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *s)
{
	t_node	*tmp;
	t_node	*tail;

	if (!s->a || !s->a->next)
		return ;
	tmp = s->a;
	tail = s->a;
	s->a = s->a->next;
	while (tail->next)
		tail = tail->next;
	tmp->next = NULL;
	tail->next = tmp;
}

void	rb(t_stack *s)
{
	t_node	*tmp;
	t_node	*tail;

	if (!s->b || !s->b->next)
		return ;
	tmp = s->b;
	tail = s->b;
	s->b = s->b->next;
	while (tail->next)
		tail = tail->next;
	tmp->next = NULL;
	tail->next = tmp;
}

void	rr(t_stack *s)
{
	ra(s);
	rb(s);
}

void	rra(t_stack *s)
{
	t_node	*tmp;
	t_node	*node;

	if (!s->a || !s->a->next)
		return ;
	node = s->a;
	while (node->next->next)
		node = node->next;
	tmp = node->next;
	node->next = NULL;
	tmp->next = s->a;
	s->a = tmp;
}

void	rrb(t_stack *s)
{
	t_node	*tmp;
	t_node	*node;

	if (!s->b || !s->b->next)
		return ;
	node = s->b;
	while (node->next->next)
		node = node->next;
	tmp = node->next;
	node->next = NULL;
	tmp->next = s->b;
	s->b = tmp;
}
