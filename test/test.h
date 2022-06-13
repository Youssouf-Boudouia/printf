/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 11:34:20 by yboudoui          #+#    #+#             */
/*   Updated: 2022/06/11 09:29:10 by yboudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# define COLOR "\033[0;36m"
# define RESET "\033[0m"
# include "../ft_printf.h"
# include <stdio.h>
# include <limits.h>
# include <string.h>

void	print_test(int expected, int received);

#define test(fmt, ...) \
{\
	print_test(\
		printf		(fmt, ##__VA_ARGS__),\
		ft_printf	(fmt, ##__VA_ARGS__)\
	);\
}

void	present(char *text);
#define PRESENT(title) for(int i = (present(title), 1); i; i--)

typedef	void (*t_test)(char **);

void	ft_test_hex(char **);
void	ft_test_ptr(char **);
void	ft_test_str(char **);
void	ft_test_int(char **);
void	ft_test_unsigned(char **flags);
# endif
