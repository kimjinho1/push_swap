/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:55:41 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 21:58:38 by jinhokim         ###   ########.fr       */
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
	str = NULL;
	while (42)
	{
		get_next_line(&str);
		ft_printf("str: %s\n", str);
		str = NULL;
	}
	if (check_sorted(&ps))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free(info.num_arr);
	free_ps(&ps);
}
