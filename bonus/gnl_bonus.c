/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhokim <jinhokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:55:08 by jinhokim          #+#    #+#             */
/*   Updated: 2022/10/04 12:42:58 by jinhokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	get_next_line(char **line)
{
	char	*buf;
	int		i;
	int		r;
	int		c;

	i = 0;
	r = 0;
	buf = (char *)malloc(10000);
	if (!buf)
		return (-1);
	r = read(0, &c, 1);
	while (r && c != '\n' && c != '\0')
	{
		if (c != '\n' && c != '\0')
			buf[i] = c;
		i++;
		r = read(0, &c, 1);
	}
	buf[i] = '\0';
	*line = buf;
	return (r);
}
