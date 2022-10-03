/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:56:16 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 21:56:19 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ra(t_ps *ps)
{
	int	n;

	if (ps->a->len < 2)
		return ;
	n = pop_left(ps->a);
	push(ps->a, n);
}

void	rb(t_ps *ps)
{
	int	n;

	if (ps->b->len < 2)
		return ;
	n = pop_left(ps->b);
	push(ps->b, n);
}

void	rr(t_ps *ps)
{
	ra(ps);
	rb(ps);
}

void	rra(t_ps *ps)
{
	int	n;

	if (ps->a->len < 2)
		return ;
	n = pop(ps->a);
	push_left(ps->a, n);
}

void	rrb(t_ps *ps)
{
	int	n;

	if (ps->b->len < 2)
		return ;
	n = pop(ps->b);
	push_left(ps->b, n);
}
