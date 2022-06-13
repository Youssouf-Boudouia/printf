/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 07:10:50 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/10 08:33:38 by yboudoui         ###   ########.fr       */
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

t_str	*ft_itoa_base(__int128_t *nb, char *base)
{
	t_str		*out;
	int			len;
	int			size;
	__int128_t	abs_nb;

	if (!check_base(&len, base))
		return (NULL);
	if (!nb)
		return (ft_create_tstr(""));
	out = malloc(sizeof(t_str));
	if (!out)
		return (free(out), NULL);
	size = ((*nb) == 0);
	abs_nb = ((*nb) * (((*nb) > 0) - ((*nb) < 0)));
	while (abs_nb && ++size)
		abs_nb /= len;
	out->str = ft_calloc(sizeof(char), size + 1);
	if (!out->str)
		return (free(out), NULL);
	out->len = size;
	abs_nb = ((*nb) * (((*nb) > 0) - ((*nb) < 0)));
	while (--size >= 0)
	{
		out->str[size] = base[abs_nb % len];
		abs_nb /= len;
	}
	return (out);
}
