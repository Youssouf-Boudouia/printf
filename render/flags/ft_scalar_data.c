/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalar_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 07:54:19 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/11 12:32:10 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

t_str	*ft_scalar_data(t_format *fmt, __int128_t *data, char *base, char *null)
{
	t_str	*out;

	out = NULL;
	if (!(*data))
	{
		if (null)
		{
			out = ft_create_tstr(null);
			data = NULL;
		}
		else if (!fmt->format.precision)
			out = ft_create_tstr("");
	}
	if (!out)
		out = ft_itoa_base(data, base);

	ft_handle_zero(fmt, data, &out);
	ft_handle_sign(fmt, data, &out);
	ft_handle_width(fmt, &out);
	return (out);
}
