/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:56:57 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/03 21:57:00 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_exit(t_info *info)
{
	free(info->num_arr);
	exit(EXIT_FAILURE);
}

void	error_free_exit(t_info *info)
{
	write(2, "Error\n", 6);
	free(info->num_arr);
	exit(EXIT_FAILURE);
}

void	print_ps(t_ps *ps)
{
	t_node	*t1;
	t_node	*t2;

	t1 = ps->a->head;
	t2 = ps->b->head;
	while (t1 || t2)
	{
		if (t1)
		{
			ft_printf("%-10d", t1->num);
			t1 = t1->next;
		}
		else
			ft_printf("          ");
		if (t2)
		{
			ft_printf("%d", t2->num);
			t2 = t2->next;
		}
		ft_printf("\n");
	}
	ft_printf("-         -\n");
	ft_printf("a         b\n");
	ft_printf("---------------------------\n\n");
}

int	check_space(char *s)
{
	int	i;

	i = (int)ft_strlen(s);
	if (i == 0)
		return (0);
	i = -1;
	while (s[++i])
	{
		if (s[i] != ' ')
			return (1);
	}
	return (0);
}
