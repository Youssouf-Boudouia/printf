/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:51:30 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/14 00:51:32 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

static t_str	*ft_lola(t_format *fmt, char *data, char *null)
{
	t_str	*out;

	if (data)
		out = ft_create_tstr(data);
	else
		out = ft_create_tstr(null);
	if (!fmt->format.precision)
	{
		ft_delete_str(out);
		out = ft_create_tstr("");
	}
	ft_handle_sign(fmt, NULL, &out);
	if (fmt->format.precision > -1)
	{
		if (!data && fmt->format.precision < out->len)
			fmt->format.precision = 0;
		out = ft_sub_tstr(out, fmt->format.precision);
	}
	ft_handle_width(fmt, &out);
	return (out);
}

t_str	*ft_str(void *format)
{
	t_format	*fmt;
	char		*data;

	fmt = format;
	data = va_arg(*fmt->input->arg, char *);
	return (ft_lola(format, data, "(null)"));
}
