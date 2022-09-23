/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 08:41:23 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 20:13:47 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_info
{
	int			str_cnt;
	int			parse_cnt;
	long long	*num_arr;
}				t_info;

int			get_num_count(int ac, char **av);
void		make_num_arr(t_info *info, int ac, char **av);
void		init_info(t_info *info, int ac, char **av);

void		error_exit(void);
int			check_num_arr(t_info *info, long long ln);

#endif
