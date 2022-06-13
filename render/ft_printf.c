/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:58:51 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/04 17:11:17 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_vsprintf(char **str, const char *fmt, va_list *arg)
{
	t_str	data;
	t_input	input;

	input = (t_input){arg, (char **)&fmt};
	data = ft_parser(input);
	va_end(*arg);
	(*str) = data.str;
	return (data.len);
}

int	ft_vdprintf(int fd, const char *fmt, va_list *arg)
{
	char		*out;
	size_t		len;

	out = NULL;
	len = ft_vsprintf(&out, fmt, arg);
	if (!out)
		return (0);
	write(fd, out, len);
	free(out);
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		arg;

	va_start(arg, fmt);
	return (ft_vdprintf(1, fmt, &arg));
}
