/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:52:45 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/11 17:44:19 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_str	*ft_tokeniser(t_input input)
{
	t_format	fmt;
	t_str		*out;

	fmt.input = &input;
	fmt.format.type = &ft_nofmt;
	if (**input.fmt == '%')
	{
		fmt.fork_index = 1;
		flag(&fmt);
		width(&fmt);
		precision(&fmt);
		type(&fmt);
	}
	out = fmt.format.type(&fmt);
	(*fmt.input->fmt) += fmt.fork_index;
	return (out);
}
/*
static void	ft_fill_lst_str(t_list **root, t_input input)
{
	t_str	*tmp;

	while (**input.fmt)
	{
		tmp = ft_tokeniser(input);
		out.len += tmp->len;
		ft_lstadd_back(root, ft_lstnew(tmp));
	}
}

static t_str	*ft_cat_lst_str(t_list *root, t_input input)
{
	t_str	*out;

	out = ft_create_tstr("");
	while (out && root)
	{
		out = ft_join(out, root->content);
		ft_lst_remove_one(&root, ft_delete_str);
	}
	return (out);

}
*/
t_str	ft_parser(t_input input)
{
	t_str	out;
	t_str	*tmp;
	t_list	*root;

	root = NULL;
	out = (t_str){0};
	while (**input.fmt)
	{
		tmp = ft_tokeniser(input);
		out.len += tmp->len;
		ft_lstadd_back(&root, ft_lstnew(tmp));
	}
	out.str = ft_calloc((out.len + 1), sizeof(char));
	while (out.str && root)
	{
		tmp = root->content;
		ft_memcpy(out.str, tmp->str, tmp->len);
		out.str += tmp->len;
		ft_lst_remove_one(&root, ft_delete_str);
	}
	out.len *= (!!out.str);
	out.str -= out.len;
	return (out);
//	return (ft_cat_lst_str(root, input));
}
