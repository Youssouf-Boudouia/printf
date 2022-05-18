/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:59:41 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/17 17:19:12 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_flag_handler	handle_flag(char c)
{
	const t_flag_handler	*handlers;

	handlers = (t_flag_handler [128]){
	NULL,
	[(int) 'c'] = &ft_char_handler,
	[(int) 's'] = &ft_str_handler,
	[(int) 'p'] = &ft_ptr_handler,
	[(int) 'd'] = &ft_int_handler,
	[(int) 'i'] = &ft_int_handler,
	[(int) 'u'] = &ft_uint_handler,
	[(int) 'x'] = &ft_uint_min_hex_handler,
	[(int) 'X'] = &ft_uint_maj_hex_handler,
	[(int) '%'] = NULL,
	[(int) '-'] = NULL,
	[(int) '0'] = NULL,
	[(int) '#'] = NULL
	};
	return (handle_flag[(int)c]);
}

t_str	ft_get_str(char **str)
{
	t_str	txt;

	txt = {.start = *str, .len = 0};
	while ((*str)[txt.len] && (*str)[txt.len] != '%')
		txt.len++;
	str += txt.len;
	return (txt);
}

t_str	ft_process_flag(char **str)
{

}

int	ft_printf(const char *format, ...)
{
	t_str				out;
	t_format_handler	format_handler[2];
	va_list				args;
	char				*tmp_format;
	t_str				total;

	format_handler[0] = &ft_get_str;
	format_handler[1] = &ft_process_flag;
	tmp_format = format;
	va_start(args, format);
	while (tmp_format)
	{
		ft_lstadd_back(format_handler[(int) (tmp_format == '%')](&tmp_format));
	}
	va_end(args);
	total = join(out);
	write(1, total.start, total.len);
	return (total.len);
}
