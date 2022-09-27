/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/27 13:37:32 by jinhokim         ###   ########.fr       */
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
	if (check_sorted(&s))
		free_exit(&info);
	print_stack(&s);
	sa(&s);
	print_stack(&s);
	pb(&s);
	print_stack(&s);
	pb(&s);
	print_stack(&s);
	pb(&s);
	print_stack(&s);
	sa(&s);
	print_stack(&s);
	pa(&s);
	pa(&s);
	pa(&s);
	print_stack(&s);
	free(info.num_arr);
	free_stack(&s);
	return (0);
}
