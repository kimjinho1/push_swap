/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/26 18:53:15 by jinhokim         ###   ########.fr       */
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
	t_stack	s;

	init_arr(&info, ac, av);
	init_stack(&info, &s);
	print_stack(&s);
	pb(&s);
	pb(&s);
	pb(&s);
	pb(&s);
	print_stack(&s);
	ra(&s);
	rb(&s);
	print_stack(&s);
	free(info.num_arr);
	//free_stack(s);
	return (0);
}
