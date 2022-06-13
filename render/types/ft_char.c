/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:40:32 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/14 00:50:58 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

static t_str	*ft_lol(t_format *fmt, t_str *out)
{
	if (!fmt->format.precision)
	{
		ft_delete_str(out);
		out = ft_create_tstr("");
	}
	ft_handle_zero(fmt, NULL, &out);
	ft_handle_sign(fmt, NULL, &out);
	ft_handle_width(fmt, &out);
	return (out);
}

t_str	*ft_char(void *format)
{
	t_format	*fmt;
	t_str		*out;

	fmt = format;
	out = ft_create_tstr(" ");
	out->str[0] = va_arg(*fmt->input->arg, int);
	return (ft_lol(format, out));
}
