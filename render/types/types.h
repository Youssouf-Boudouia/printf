/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 06:24:23 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/26 18:43:30 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <stdarg.h>
# include <unistd.h>
# include "../utils/utils.h"

typedef struct s_arg {
	const char	**str;
	va_list		*arg;
}	t_arg;

typedef size_t	(*t_handler)(const char *, va_list *);

void		ft_init(t_handler *handlers);
size_t		ft_int(const char *str, va_list *arg);
size_t		ft_ptr(const char *str, va_list *arg);
size_t		ft_str(const char *str, va_list *arg);
size_t		ft_char(const char *str, va_list *arg);
size_t		ft_uint(const char *str, va_list *arg);
size_t		ft_default(const char *str, va_list *arg);
size_t		ft_percentage(const char *str, va_list *arg);
size_t		ft_uint_hex_maj(const char *str, va_list *arg);
size_t		ft_uint_hex_min(const char *str, va_list *arg);

# endif
