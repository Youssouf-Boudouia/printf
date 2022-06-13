/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:14:41 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/11 12:32:44 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_str	*ft_int(void *format)
{
	t_format	*fmt;
	__int128_t	data;

	fmt = format;
	data = va_arg(*fmt->input->arg, int);
	return (ft_scalar_data(format, &data, "0123456789", NULL));
}

t_str	*ft_uint(void *format)
{
	t_format		*fmt;
	__int128_t		data;

	fmt = format;
	data = va_arg(*fmt->input->arg, unsigned int);
	return (ft_scalar_data(format, &data, "0123456789", NULL));
}

t_str	*ft_uint_hex_min(void *format)
{
	t_format		*fmt;
	__int128_t		data;

	fmt = format;
	data = va_arg(*fmt->input->arg, unsigned int);
	return (ft_scalar_data(format, &data, "0123456789abcdef", NULL));
}

t_str	*ft_uint_hex_maj(void *format)
{
	return (ft_str_toupper(ft_uint_hex_min(format)));
}

t_str	*ft_ptr(void *format)
{
	t_format	*fmt;
	__int128_t	data;

	fmt = format;
	data = va_arg(*fmt->input->arg, unsigned long long int);
	return (ft_scalar_data(format, &data, "0123456789abcdef", "(nil)"));
}
