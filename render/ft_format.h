/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 08:19:52 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/10 08:30:24 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FORMAT_H
# define FT_FORMAT_H

# include <stdarg.h>
# include "utils/utils.h"

typedef	struct	s_input {
	va_list	*arg;
	char	**fmt;
}	t_input;

typedef t_str	*(*t_handler)(void *);

typedef struct	s_format {
	t_input	*input;
	int		fork_index;
	struct {
		char		flags[128];
		int			width;
		int			precision;
		t_handler	type;
	}	format;
}	t_format;

# endif
