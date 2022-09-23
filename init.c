/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:45:35 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 21:42:53 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
static void	parse_input(t_info *info, int ac, char **av)
{
	info->str_cnt = get_num_count(ac, av);
	info->parse_cnt = 0;
	make_num_arr(info, ac, av);
}
*/

void	init(t_info *info, int ac, char **av)
{
	//parse_input(info, ac, av);
	info->str_cnt = get_num_count(ac, av);
	info->parse_cnt = 0;
	make_num_arr(info, ac, av);
}
