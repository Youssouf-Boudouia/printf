/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_default.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 23:05:50 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/14 00:51:11 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_str	*ft_default(void *format)
{
	t_format	*fmt;
	char		*str;

	fmt = format;
	str = ft_substr(*fmt->input->fmt, 0, fmt->fork_index);
	return (ft_new_tstr(str));
}

t_str	*ft_nofmt(void *format)
{
	t_format	*fmt;
	char		*str;

	fmt = format;
	fmt->fork_index = 0;
	while ((*fmt->input->fmt)[fmt->fork_index]
			&& (*fmt->input->fmt)[fmt->fork_index] != '%')
		fmt->fork_index++;
	str = ft_substr((*fmt->input->fmt), 0, fmt->fork_index);
	return (ft_new_tstr(str));
}
