/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percentage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:58:32 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/06 19:32:46 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_str	*ft_percentage(void *format)
{
	char		*str;

	(void)format;
	str = ft_strdup("%");
	return (ft_new_tstr(str));
}
