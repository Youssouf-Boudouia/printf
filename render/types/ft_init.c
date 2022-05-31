/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:53:16 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/26 18:46:37 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	ft_init(t_handler handlers[128])
{
	int	size;

	size = 128;
	while (--size)
		handlers[size] = &ft_default;
	handlers['c'] = &ft_char;
	handlers['s'] = &ft_str;
	handlers['p'] = &ft_ptr;
	handlers['d'] = &ft_int;
	handlers['i'] = &ft_int;
	handlers['u'] = &ft_uint;
	handlers['x'] = &ft_uint_hex_min;
	handlers['X'] = &ft_uint_hex_maj;
	handlers['%'] = &ft_percentage;
}
