/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:57:21 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/13 23:32:58 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	normal(char **flags)
{
	(void)flags;
	PRESENT("without %"){
		test("Hello\n");
		test("Hello World!\n");
	}
}

void	ft_test_c(char **flags)
{
	(void)flags;
	PRESENT("%c"){
		test("%c\n", 'c');
		test("|%c|\n", 0);
		test("%c\n", 'A');
		test("%c%c%c", 'a', 'b', 'c');
		test("%c%c%c%c", 'a', 0, 'b', 'c');
	}
}

void	ft_test_percentage(char **flags)
{
	(void)flags;
	PRESENT("%"){
		test("%%\n");
		test("Hello %%\n");
	}
}

void	ft_test_mixed(char **flags)
{
	(void)flags;
	PRESENT("% mixed"){
		test("Hello %i world %d\n", -123, 789);
		test("Hello %x world %X\n", 123456, -9807);
		test("%c%%%s\n", 'c', "hello");
		test("[%%%%%%c%%%%%%]\n");
	}
}

void 	unvalid(char **flags)
{
	(void)flags;
	PRESENT("unvalid %"){
//		test("Hello %y\n");
	}
}

void	mandatory(char c)
{
	t_test	*types;
	char	*flags[42] = {
	"", "#", "+", " ", "-", "0", "20", ".", ".0", ".10",
	"#+","#-","# ", "#0", "#20", "#.", "#.0", "#.10",
	"+ ", "+-", "+0", "+20", "+.", "+.0", "+.10",
	" -", " 0", " 20", " .", " .0", " .10",
	"-0", "-20", "-.", "-.0", "-.10",
	"25.10", "10.25", "2.0",
	"# 10.15",
	"\0",
	NULL};
	int		len = -1;

	types = (t_test[128]){
	NULL,
	[' '] = normal,
	['c'] = ft_test_c,
	['s'] = ft_test_str,
	['p'] = ft_test_ptr,
	['d'] = ft_test_int,
	['i'] = ft_test_int,
	['u'] = ft_test_unsigned,
	['x'] = ft_test_hex,
//	['X'] = ft_test_hex,
	['%'] = ft_test_percentage,
	['y'] = unvalid
	};
	if (c == 'A')
	{
		while (++len < 128)
			if (types[len])
				types[len](flags);
	}
	else
		types[(int)c](flags);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		mandatory(argv[1][0]);
}
