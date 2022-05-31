/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:58:51 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/26 18:49:02 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_handle_words(const char **str)
{
	int	index;

	index = 0;
	while ((*str)[index] && (*str)[index] != '%')
		index++;
	write(1, (*str), index);
	(*str) += index;
	return (index);
}

int	ft_printf(const char *str, ...)
{
	size_t		len;
	va_list		arg;
	t_handler	handlers[128];

	len = 0;
	va_start(arg, str);
	ft_init(handlers);
	while (*str)
	{
		if (str[0] == '%')
		{
			len += handlers[(int)str[1]](&str[1], &arg);
			str += 2;
		}
		else
			len += ft_handle_words(&str);
	}
	va_end(arg);
	return (len);
}
