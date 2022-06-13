/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:26:15 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/10 07:01:14 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>

# include <unistd.h>
# include "libft/libft.h"
# include "types/types.h"

void	flag(t_format *fmt);
void	width(t_format *fmt);
void	precision(t_format *fmt);
void	type(t_format *fmt);

t_str	ft_parser(t_input);

int		ft_vsprintf(char **str, const char *fmt, va_list *arg);
int		ft_vdprintf(int fd, const char *fmt, va_list *arg);
int		ft_printf(const char *format, ...);

#endif
