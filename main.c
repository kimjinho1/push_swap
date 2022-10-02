/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/02 22:32:37 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	//atexit(a);
	t_info	info;
	t_ps	ps;

	init_arr(&info, ac, av);
	init_ps(&info, &ps);
	if (check_sorted(&ps))
	{
		free_ps(&ps);
		free_exit(&info);
	}
	if (info.str_cnt < 6)
		sort_5_or_less(&ps);
	else
	{
		a_to_b(&ps, 0, 2);
		b_to_a(&ps);
	}
	print_all_cmd(ps.cmd_stack);
	free(info.num_arr);
	free_ps(&ps);
}
