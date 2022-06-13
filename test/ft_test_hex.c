/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:56:51 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/07 18:16:31 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_test_hex(char **flags)
{
	static int	show = 0;
	char		*types = "xX";
	int			data[5] = {(int)-2147483648, (int)2147483647, 0, -42, 42};
	char		piece[10];
	char		buffer[100];

	if (show)
		return ;
	present("%x and %X");
	while (*types)
	{
		int	i = 0;
		while (flags[i])
		{
			memset(piece, 0, 10);
			memset(buffer, 0, 100);
			sprintf(piece, "%%%s%c", flags[i], *types);
			sprintf(buffer, "\t'%%%s'\t [%s,%s,%s,%s,%s] \n",
			piece, piece, piece, piece, piece, piece);
			test(buffer, data[0], data[1], data[2], data[3], data[4]);
			i++;
		}
		types++;
	}
	show += 1;
}
