/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_hex_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:33:49 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/30 18:56:07 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

size_t	ft_uint_hex_maj(const char *str, va_list *arg)
{
	unsigned int	data;
	char			*output;
	size_t			len;

	(void)str;
	data = va_arg(*arg, unsigned int);
	output = ft_itoa_base(0, data, "0123456789ABCDEF");
	len = ft_strlen(output);
	write(1, output, len);
	free(output);
	return (len);
}
