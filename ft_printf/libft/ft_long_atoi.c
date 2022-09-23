/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:06:33 by jinhokim          #+#    #+#             */
/*   Updated: 2022/09/23 20:18:37 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

long long	ft_long_atoi(const char *nptr, int *check)
{
	long		i;
	long long	n;

	i = 0;
	n = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		i++;
		if (!nptr[i])
			*check = 1;
	}
	if (nptr[i] && nptr[i] == '0' && nptr[i + 1])
	{
		*check = 1;
		return (0);
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
		n = n * 10 + (nptr[i++] - '0');
	if (nptr[0] == '-')
		n *= -1;
	if (n > 2147483647 || n < -2147483648)
		*check = 1;
	return (n);
}
