/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint_maj_hex_handler.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:56:01 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/12 10:39:21 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_handler_output	ft_uint_maj_hex_handler(va_list data)
{
	unsigned int	*ptr;
	char			*output;

	output = ft_itoa_base(*ptr, "0123456789ABCDEF");
	return (output);
}
