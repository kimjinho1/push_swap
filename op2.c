/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:32:05 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/27 13:08:52 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *s)
{
	t_node	*tmp;

	if (!s->a || !s->a->next)
		return ;
	tmp = s->a;
	s->a = s->a->next;
	s->a_tail->next = tmp;
	s->a_tail = tmp;
	s->a_tail->next = NULL;
}

void	rb(t_stack *s)
{
	t_node	*tmp;

	if (!s->b || !s->b->next)
		return ;
	tmp = s->b;
	s->b = s->b->next;
	s->b_tail->next = tmp;
	s->b_tail = tmp;
	s->b_tail->next = NULL;
}

void	rr(t_stack *s)
{
	ra(s);
	rb(s);
}

void	rra(t_stack *s)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!s->a || !s->a->next)
		return ;
	tmp = s->a;
	while (tmp->next && tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	tmp2 = s->a_tail;
	s->a_tail->next = s->a;
	s->a = s->a_tail;
	s->a_tail = tmp;
}

void	rrb(t_stack *s)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!s->b || !s->b->next)
		return ;
	tmp = s->b;
	while (tmp->next && tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	tmp2 = s->b_tail;
	s->b_tail->next = s->b;
	s->b = s->b_tail;
	s->b_tail = tmp;
}
