/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:37:49 by yboudoui          #+#    #+#             */
/*   Updated: 2022/05/31 10:24:45 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>

typedef struct s_str {
	char	*str;
	size_t	len;
}	t_str;

size_t	ft_strlen(const char *str);
char	*ft_itoa_base(int us, __int128_t m, char *base);

#endif
