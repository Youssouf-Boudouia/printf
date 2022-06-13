/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presentation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:44:44 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/07 11:45:06 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_test(int expected, int received)
{
	int		test;
	struct	s_message {
		const char	*msg;
		const char	*color;
	}	message[2]= {
	{"KO", "\033[1;31m"},
	{"OK", "\033[1;32m"}};

	test = (received == expected);
	printf("\t\t%sReturn is %s : [%d,%d]%s\n\n",
	message[test].color, message[test].msg,
	received, expected, "\033[0m");
}

void	present(char *text)
{
	char	line[240];
	int		txt_len;
	int		pad;

	txt_len = strlen(text);
	pad = txt_len / 2;
	for (int i = 0; i < 240; i += 3)
		memcpy(&line[i], "─", 3);
	printf(
		"%s"
		"╭%.*s╮\n"
		"│%*s%s%*s│\n"
		"╰%.*s╯"
		"%s\n",
	COLOR,
	80 * 3, line, 40 - pad, "",
	text, 
	40 - (txt_len - pad), "", 80 * 3, line,
	RESET);
}
