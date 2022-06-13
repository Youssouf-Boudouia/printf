/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:04:39 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/07 18:15:29 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_test_int(char **flags)
{
	static int	show = 0;
	char		*types = "d";
	int			data[6] = {10, -10, 0, INT_MIN, INT_MAX, 2};
	char		piece[10];
	char		buffer[100];

	if (show)
		return ;
	present("%d and %i");
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
