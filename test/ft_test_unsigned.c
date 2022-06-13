/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 06:17:54 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/10 11:48:25 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_test_unsigned(char **flags)
{
	static int		show = 0;
	char			*types = "u";
	unsigned int	data[6] = {-2147483648, 2147483647, 0, -42, 42, 1};
	char			piece[10];
	char			buffer[100];

	if (show)
		return ;
	present("%u");
	while (*types)
	{
		int	i = 0;
		while (flags[i])
		{
			memset(piece, 0, 10);
			memset(buffer, 0, 100);
			sprintf(piece, "%%%s%c", flags[i], *types);
			sprintf(buffer, "\t'%%%s'\t [%s,%s,%s,%s,%s,%s] \n",
			piece, piece, piece, piece, piece, piece, piece);
			test(buffer, data[0], data[1], data[2], data[3], data[4], data[5]);
			i++;
		}
		types++;
	}
	show += 1;
}
