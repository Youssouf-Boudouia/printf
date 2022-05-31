/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:40:32 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/26 15:39:33 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

size_t	ft_char(const char *str, va_list *arg)
{
	char	data;

	(void)str;
	data = (char)va_arg(*arg, int);
	return (write(1, &data, 1));
}
