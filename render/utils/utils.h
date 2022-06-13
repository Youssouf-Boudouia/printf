/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:37:49 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/13 21:36:47 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_str {
	char	*str;
	int		len;
}	t_str;

t_str	*ft_new_tstr(const char *str);
t_str	*ft_create_tstr(const char *str);
t_str	*ft_allocate_str(int data, size_t len);
t_str	*ft_join(t_str *s1, t_str *s2);
t_str	*ft_sub_tstr(t_str *in, int len);
t_str	*ft_str_toupper(t_str *s);
void	ft_delete_str(void *input);

int		ft_atoi(const char *nptr);
t_str	*ft_itoa_base(__int128_t *, char *);

#endif
