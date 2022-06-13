/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:41:30 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/13 21:54:24 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_str	*ft_new_tstr(const char *str)
{
	t_str	*output;

	output = NULL;
	if (str)
		output = malloc(sizeof(t_str));
	if (output)
	{
		output->str = (char*)str;
		output->len = ft_strlen(str);
	}
	return (output);
}

t_str	*ft_create_tstr(const char *str)
{
	char	*tmp;

	tmp = ft_strdup(str);
	return (ft_new_tstr(tmp));
}

t_str	*ft_join_only(t_str *s1, t_str *s2)
{
	t_str	*output;

	if (!s1 || !s2)
		return (NULL);
	output = malloc(sizeof(t_str));
	if (!output)
		return (NULL);
	output->len = s1->len + s2->len;
	output->str = ft_calloc(output->len + 1, sizeof(char));
	if (!output->str)
		return (free(output), NULL);
	ft_memcpy(output->str, s1->str, s1->len);
	ft_memcpy(output->str + s1->len, s2->str, s2->len);
	return (output);
}

t_str	*ft_allocate_str(int data, size_t len)
{
	char	*str;

	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memset(str, data, len);
	return (ft_new_tstr(str));
}

t_str	*ft_join(t_str *s1, t_str *s2)
{
	t_str	*output;

	output = ft_join_only(s1, s2);
	ft_delete_str(s1);
	ft_delete_str(s2);
	return (output);
}

t_str	*ft_str_toupper(t_str *s)
{
	while (*s->str)
	{
		*s->str = ft_toupper(*s->str);
		s->str++;
	}
	s->str -= s->len;
	return (s);
}

t_str	*ft_sub_tstr(t_str *in, int len)
{
	t_str	*output;

	if (!in)
		return (NULL);
	if (len >= in->len)
		return (in);
	output = malloc(sizeof(t_str));
	if (!output)
		return (NULL);
	output->len = len;
	output->str = ft_calloc(len + 1, sizeof(char));
	if (!output->str)
		return (free(output), NULL);
	ft_memcpy(output->str, in->str, len);
	ft_delete_str(in);
	return (output);
}

void	ft_delete_str(void *input)
{
	t_str	*data;

	data = input;
	free(data->str);
	free(data);
}
