/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:55:41 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/04 16:02:04 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	free_all(t_info *info, t_ps *ps)
{
	free(info->num_arr);
	free_ps(ps);
}

static void	main_2(t_ps *ps)
{
	char	*str;
	int		r;

	r = 1;
	while (r)
	{
		r = get_next_line(&str);
		if (r)
			check_op(ps, str);
		free(str);
	}
	if (!ps->op_flag)
		write(2, "Error\n", 6);
	else
	{
		if (check_sorted(ps))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
	}
}

int	main(int ac, char **av)
{
	t_info	info;
	t_ps	ps;

	init_arr(&info, ac, av);
	init_ps(&info, &ps);
	if (ps.a->len > 1)
		main_2(&ps);
	free_all(&info, &ps);
}
