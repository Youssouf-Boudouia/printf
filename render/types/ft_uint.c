/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:52:11 by yboudoui          #+#    #+#             */
/*   updated: 2022/05/26 09:54:58 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

size_t	ft_uint(const char *str, va_list *arg)
{
	unsigned int	data;
	char			*output;
	size_t			len;

	(void)str;
	data = va_arg(*arg, unsigned int);
	output = ft_itoa_base(0, data, "0123456789");
	len = ft_strlen(output);
	write(1, output, len);
	free(output);
	return (len);
}
