/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:55:41 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 23:07:34 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	main(int ac, char **av)
{
	t_info	info;
	t_ps	ps;
	char	*str;

	init_arr(&info, ac, av);
	init_ps(&info, &ps);
	if (check_sorted(&ps))
	{
		free_ps(&ps);
		free_exit(&info);
	}
	while (get_next_line(&str) > 0)
	{
		check_op(&ps, &info, str);
		str = NULL;
	}
	if (check_sorted(&ps))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free(info.num_arr);
	free_ps(&ps);
}
