/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:39:01 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/30 21:58:26 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a(void)
{
	system("leaks push_swap");
}

/*
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
	if (info.str_cnt < 6)
		sort(&info, &s);
	print_all_cmd(&s);
	free(info.num_arr);
	free_stack(&s);
	return (0);
}
*/

int	main(int ac, char **av)
{
	atexit(a);
	t_info	info;
	t_ps	ps;
	//t_stack	stack;

	init_arr(&info, ac, av);
	init_ps(&info, &ps);
	if (check_sorted(&ps.a))
		free_exit(&info);
	print_ps(&ps);
	/*
	push(&stack, 2);
	push(&stack, 3);
	push(&stack, 4);
	push_left(&stack, 1);
	push(&stack, 5);
	pop(&stack);
	print_stack(&stack);
	free_stack(&stack);
	*/
	free(info.num_arr);
	free_ps(&ps);
}
