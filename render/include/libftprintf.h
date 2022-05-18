/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:58:48 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/16 15:35:37 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_str {
	char	*start;
	size_t	len;
}	t_str;

typedef char *(t_flag_handler)(void*);
typedef t_str (t_format_handler)(char **);

int	ft_printf(const char *format, ...);

#endif
