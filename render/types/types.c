/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 00:44:18 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/14 00:49:48 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

const t_handler	g_handler_list[128] = {
[0] = ft_nofmt,
['c'] = &ft_char,
['s'] = &ft_str,
['p'] = &ft_ptr,
['d'] = &ft_int,
['i'] = &ft_int,
['u'] = &ft_uint,
['x'] = &ft_uint_hex_min,
['X'] = &ft_uint_hex_maj,
['%'] = &ft_percentage,
	&ft_default,
};
