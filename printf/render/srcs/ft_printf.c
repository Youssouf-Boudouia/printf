/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:59:41 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/12 14:09:39 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag_handler	handle_flag(char c)
{
	t_flag_handler	*handlers;

	handlers = (t_flag_handler [128]){
	NULL,
	[(int) 'c'] = ft_char_handler,
	[(int) 's'] = ft_str_handler,
	[(int) 'p'] = ft_ptr_handler,
	[(int) 'd'] = ft_int_handler,
	[(int) 'i'] = ft_int_handler,
	[(int) 'u'] = ft_uint_handler,
	[(int) 'x'] = ft_uint_min_hex_handler,
	[(int) 'X'] = ft_uint_maj_hex_handler,
	[(int) '%'] =
	[(int) '-'] =
	[(int) '0'] =
	[(int) '-'] =
	};
	return (handle_flag[(int)c]);
}

int	ft_printf(const char *format, ...)
{
	va_list args;

	va_start(args, counter);
	while (*format)
	{
	sum += (int) va_arg( args, int );
		format++;
	}
	va_end(args);
	return (0);
}
