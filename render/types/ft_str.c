/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:51:30 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/26 15:29:20 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

size_t	ft_str(const char *str, va_list *arg)
{
	char	*data;
	size_t	len;

	(void)str;
	data = va_arg(*arg, char *);
	len = ft_strlen(data);
	write(1, data, len);
	return (len);
}
