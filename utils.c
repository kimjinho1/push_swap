/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:24:45 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 20:20:57 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

int	check_num_arr(t_info *info, long long ln)
{
	int	i;

	i = -1;
	while (++i < info->parse_cnt)
	{
		if (info->num_arr[i] == ln)
			return (0);
	}
	return (1);
}
