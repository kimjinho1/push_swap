/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 20:20:42 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	a(void)
{
	system("leaks push_swap");
}
*/

int	main(int ac, char **av)
{
	//atexit(a);
	t_info		info;
	int			i;

	init_info(&info, ac, av);
	i = -1;
	while (++i < info.str_cnt)
		ft_printf("%lld\n", info.num_arr[i]);
	return (0);
}
