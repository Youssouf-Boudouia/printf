/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:50:34 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/31 10:12:55 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include <limits.h>

size_t	ft_ptr(const char *str, va_list *arg)
{
	__int128_t			data;
	char				*output;
	size_t				len;

	(void)str;
	data = va_arg(*arg, unsigned long long int);
	if (!data)
		return (write(1, "(nil)", 5));
	output = ft_itoa_base(1, data, "0123456789abcdef");
	write(1, "0x", 2);
	len = ft_strlen(output);
	write(1, output, len);
	free(output);
	return (len + 2);
}
