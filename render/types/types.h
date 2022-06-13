/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 06:24:23 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/14 00:47:26 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include "../ft_format.h"
# include "../flags/flags.h"

t_str		*ft_nofmt(void *format);
t_str		*ft_default(void *format);
t_str		*ft_int(void *format);
t_str		*ft_ptr(void *format);
t_str		*ft_str(void *format);
t_str		*ft_char(void *format);
t_str		*ft_uint(void *format);
t_str		*ft_percentage(void *format);
t_str		*ft_uint_hex_maj(void *format);
t_str		*ft_uint_hex_min(void *format);

extern const t_handler	g_handler_list[128];
#endif
