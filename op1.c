/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:11:26 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/27 13:44:00 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s)
{
	int		n;

	if (!s->a || !s->a->next)
		return ;
	n = s->a->num;
	s->a->num = s->a->next->num;
	s->a->next->num = n;
	if (!s->a->next->next)
		s->a_tail = s->a->next;
}

void	sb(t_stack *s)
{
	int		n;

	if (!s->b || !s->b->next)
		return ;
	n = s->b->num;
	s->b->num = s->b->next->num;
	s->b->next->num = n;
	if (!s->b->next->next)
		s->b_tail = s->b->next;
}

void	ss(t_stack *s)
{
	sa(s);
	sb(s);
}

void	pa(t_stack *s)
{
	t_node	*tmp;

	if (!s->b)
		return ;
	tmp = s->b;
	if (s->b != s->b_tail)
		s->b = s->b->next;
	else
	{
		s->b = NULL;
		s->b_tail = NULL;
	}
	if (!s->a)
	{
		tmp->next = NULL;
		s->a = tmp;
		s->a_tail = tmp;
	}
	else
	{
		tmp->next = s->a;
		s->a = tmp;
	}
}

void	pb(t_stack *s)
{
	t_node	*tmp;

	if (!s->a)
		return ;
	tmp = s->a;
	if (s->a != s->a_tail)
		s->a = s->a->next;
	else
	{
		s->a = NULL;
		s->a_tail = NULL;
	}
	if (!s->b)
	{
		tmp->next = NULL;
		s->b = tmp;
		s->b_tail = tmp;
	}
	else
	{
		tmp->next = s->b;
		s->b = tmp;
	}
}
