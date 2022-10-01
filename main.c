/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/01 22:23:46 by jinhokim         ###   ########.fr       */
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
		free_exit(&info);
	print_ps(&ps);
	if (info.str_cnt < 6)
		sort_5_or_less(&info, &ps);
	print_ps(&ps);
	if (check_sorted(&ps))
		ft_printf("sort finish\n");
	else
		ft_printf("sort not finish\n");
	free(info.num_arr);
	free_ps(&ps);
}
