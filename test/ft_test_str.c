/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:54:58 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/11 09:31:22 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_test_str(char **flags)
{
	static int	show = 0;
	char		*types = "s";
	char		*data[5] = {"hello world", NULL, "\0", (char[5]){-23, 42, 0, 99}, "🤔"};
	char		piece[10];
	char		buffer[100];

	if (show)
		return ;
	present("%p");
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
