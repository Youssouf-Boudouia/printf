/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 07:10:50 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/31 10:26:39 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	check_base(int *len, char *base)
{
	char		*check;

	(*len) = 0;
	if (!base)
		return (0);
	check = (char [128]){0};
	while (base[(*len)] && ++check[(int)base[(*len)]])
		if (check[(int)base[(*len)++]] > 1)
			return (0);
	return ((*len) > 1);
}

char	*ft_itoa_base(int us, __int128_t nb, char *base)
{
	char		*out;
	int			len;
	int			size;
	__int128_t	abs_nb;

	if (!check_base(&len, base))
		return (NULL);
	size = (!us && nb <= 0);
	abs_nb = (nb * ((nb > 0) - (nb < 0)));
	while (abs_nb && ++size)
		abs_nb /= len;
	out = malloc((size + 1) * sizeof(char));
	if (!out)
		return (NULL);
	out[0] = '-';
	out[size] = '\0';
	abs_nb = (nb * ((nb > 0) - (nb < 0)));
	while (--size >= (!us && nb < 0))
	{
		out[size] = base[abs_nb % len];
		abs_nb /= len;
	}
	return (out);
}
