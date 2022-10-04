/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:58:58 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/04 12:29:48 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	check_op2(t_ps *ps, char *op)
{
	if (!ft_strncmp(op, "rra", 3) && ft_strlen(op) == 3)
		cmd_update(ps, 8, rra);
	else if (!ft_strncmp(op, "rrb", 3) && ft_strlen(op) == 3)
		cmd_update(ps, 9, rrb);
	else if (!ft_strncmp(op, "rrr", 3) && ft_strlen(op) == 3)
		cmd_update(ps, 10, rrr);
	else
		ps->op_flag = 0;
}

void	check_op(t_ps *ps, char *op)
{
	if (!ft_strncmp(op, "sa", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 0, sa);
	else if (!ft_strncmp(op, "sb", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 1, sb);
	else if (!ft_strncmp(op, "ss", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 2, ss);
	else if (!ft_strncmp(op, "pa", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 3, pa);
	else if (!ft_strncmp(op, "pb", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 4, pb);
	else if (!ft_strncmp(op, "ra", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 5, ra);
	else if (!ft_strncmp(op, "rb", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 6, rb);
	else if (!ft_strncmp(op, "rr", 2) && ft_strlen(op) == 2)
		cmd_update(ps, 7, rb);
	else
		check_op2(ps, op);
}
