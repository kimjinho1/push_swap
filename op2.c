/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:32:05 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/26 18:51:15 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *s)
{
	int		n;
	t_node	*tmp;

	if (!s->a || !s->a->next)
		return ;
	n = s->a->num;
	tmp = s->a;
	while (tmp->next)
		tmp = tmp->next;
	s->a->num = tmp->num;
	tmp->num = n;
}

void	rb(t_stack *s)
{
	int		n;
	t_node	*tmp;

	if (!s->b || !s->b->next)
		return ;
	n = s->b->num;
	tmp = s->b;
	while (tmp->next)
		tmp = tmp->next;
	s->b->num = tmp->num;
	tmp->num = n;
}
