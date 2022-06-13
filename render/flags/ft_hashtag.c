/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 07:36:01 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/13 23:36:14 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

void	ft_handle_sign(t_format *fmt, __int128_t *data, t_str **in)
{
	char	*c;

	if (!fmt || !data || !in || !(*in))
		return ;
	if (*data && fmt->format.flags['#'])
		(*in) = ft_join(ft_create_tstr("0x"), (*in));
	c = "";
	if (*data < 0)
		c = "-";
	else
	{
		if (fmt->format.flags['+'])
			c = "+";
		if (fmt->format.flags[' '])
			c = " ";
	}
	(*in) = ft_join(ft_create_tstr(c), (*in));
}

void	ft_handle_zero(t_format *fmt, __int128_t *data, t_str **out)
{
	t_str	*spaces;
	int		width;

	if (!data)
		return ;
	width = 0;
	if (fmt->format.precision > 0)
		width = fmt->format.precision;
	if (!width && fmt->format.flags['0'])
		width = fmt->format.width - (*data < 0);
	width -= (*out)->len;
	if (width < 0)
		return ;
	spaces = ft_allocate_str("0 "[(*data == 0) && (!fmt->format.precision)], width);
	(*out) = ft_join(spaces, (*out));
}

void	ft_handle_width(t_format *fmt, t_str **out)
{
	t_str	*spaces;
	int		width;

	width = fmt->format.width - (*out)->len;
	if (width < 0)
		return ;
	spaces = ft_allocate_str(' ', width);
	if (fmt->format.flags['-'])
		(*out) = ft_join((*out), spaces);
	else
		(*out) = ft_join(spaces, (*out));
}
