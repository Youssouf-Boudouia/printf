/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:45:44 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/12 10:39:21 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_handler_output	ft_int_handler(va_list data)
{
	int		*ptr;
	char	*output;

	ptr = data;
	output = ft_itoa(*ptr);
	return (output);
}
