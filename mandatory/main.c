/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 21:07:28 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_info	info;
	t_ps	ps;
	int		chunk;

	init_arr(&info, ac, av);
	init_ps(&info, &ps);
	if (check_sorted(&ps))
	{
		free_ps(&ps);
		free_exit(&info);
	}
	chunk = ps.a->len * (0.000000053 * ps.a->len + 0.03) + 14.5;
	if (info.str_cnt < 6)
		sort_5_or_less(&ps);
	else
	{
		a_to_b(&ps, 0, chunk);
		b_to_a(&ps);
	}
	optimize(&ps);
	print_all_cmd(ps.cmd_stack);
	free(info.num_arr);
	free_ps(&ps);
}
