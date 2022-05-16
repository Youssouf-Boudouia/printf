/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_handler.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:40:32 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/12 10:39:21 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_handler.h"

t_handler_output	ft_char_handler(va_list data)
{
	char	*ptr;
	char	output[2];

	ptr = data;
	output[0] = ptr[0]
	output[1] = 0;
	return output;
}
