/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:11:26 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/26 18:46:05 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *s)
{
	int	n;

	if (!s->a || !s->a->next)
		return ;
	n = s->a->num;
	s->a->num = s->a->next->num;
	s->a->next->num = n;
}

void	sb(t_stack *s)
{
	int	n;

	if (!s->b || !s->b->next)
		return ;
	n = s->b->num;
	s->b->num = s->b->next->num;
	s->b->next->num = n;
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
	s->b = s->b->next;
	tmp->next = s->a;
	s->a = tmp;
}

void	pb(t_stack *s)
{
	t_node	*tmp;

	if (!s->a)
		return ;
	tmp = s->a;
	s->a = s->a->next;
	tmp->next = s->b;
	s->b = tmp;
}
