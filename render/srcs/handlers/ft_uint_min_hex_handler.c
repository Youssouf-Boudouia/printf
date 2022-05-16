/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_min_hex_handler.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:03:44 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/12 10:39:57 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_handler_output	ft_uint_min_hex_handler(va_list data)
{
	unsigned int	*ptr;
	char			*output;

	ptr = data;
	output = ft_itoa_base(*ptr, "0123456789abcdef");
	return (output);
}
