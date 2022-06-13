/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formater.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:13:41 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/14 00:48:38 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_in_set(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	flag(t_format *fmt)
{
	int	size;
	int	flg;

	size = -1;
	while (++size < 128)
		fmt->format.flags[size] = -1 * !is_in_set(size, "#0 +-");
	while (fmt->format.flags[(int)(*fmt->input->fmt)[fmt->fork_index]] != -1)
	{
		flg = (*fmt->input->fmt)[fmt->fork_index];
		fmt->format.flags[flg] = 1;
		fmt->fork_index++;
	}
	fmt->format.flags['0'] *= !(fmt->format.flags['-']);
	fmt->format.flags[' '] *= !(fmt->format.flags['+']);
}

void width(t_format *fmt)
{
	fmt->format.width = -1;
	if (ft_isdigit((*fmt->input->fmt)[fmt->fork_index]))
	{
		fmt->format.width = ft_atoi(&(*fmt->input->fmt)[fmt->fork_index]);
		while (ft_isdigit((*fmt->input->fmt)[fmt->fork_index]))
			fmt->fork_index++;
	}
}

void precision(t_format *fmt)
{
	fmt->format.precision = -1;
	if ((*fmt->input->fmt)[fmt->fork_index] != '.')
		return ;
	fmt->format.precision = 0;
	fmt->fork_index++;
	if (ft_isdigit((*fmt->input->fmt)[fmt->fork_index]))
	{
		fmt->format.precision = ft_atoi(&(*fmt->input->fmt)[fmt->fork_index]);
		while (ft_isdigit((*fmt->input->fmt)[fmt->fork_index]))
			fmt->fork_index++;
	}
}

void	type(t_format *fmt)
{
	char	type;

	type = (*fmt->input->fmt)[fmt->fork_index];
	fmt->format.flags['#'] = (fmt->format.flags['#'] || type == 'p');
	fmt->format.flags['#'] *= !is_in_set(type, "diu");
	fmt->format.flags['+'] *= !is_in_set(type, "uxX");
	fmt->format.flags[' '] *= !is_in_set(type, "uxX");
	fmt->format.type = g_handler_list[(int)type];
	fmt->fork_index++;
}
