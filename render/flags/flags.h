/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 07:37:58 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/11 12:22:55 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H

# include "../ft_format.h"

void	ft_handle_sign(t_format *, __int128_t *, t_str **);
void	ft_handle_zero(t_format *, __int128_t *, t_str **);
void	ft_handle_width(t_format *, t_str **);

t_str	*ft_scalar_data(t_format *, __int128_t *, char *, char *);

# endif
