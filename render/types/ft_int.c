/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:45:44 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/30 18:55:26 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

size_t	ft_int(const char *str, va_list *arg)
{
	int		data;
	char	*output;
	size_t	len;

	(void)str;
	data = va_arg(*arg, int);
	output = ft_itoa_base(0, data, "0123456789");
	len = ft_strlen(output);
	write(1, output, len);
	free(output);
	return (len);
}
