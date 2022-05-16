/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozzy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:55:41 by ozzy              #+#    #+#             */
/*   Updated: 2022/04/21 22:28:55 by ozzy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define VERTICAL_BLOCK "\u2502"
#define LINE_BLOCK "\u2500"
#define CROSS "\u253c"
#define	LINE "─────────────────────────────────────────────────────────────────"


void	draw(const char *func_name, char **test)
{
	printf("%.*s%s%.*s\n", (8*3), LINE, CROSS, (3*30), LINE);
	printf("%s\t%s\n", func_name, VERTICAL_BLOCK);
	printf("\t%s STUFF\n", VERTICAL_BLOCK);
}

void	space(int data)
{
	printf("%.*s%s%.*s\n", (8*3), LINE, CROSS, (3*30), LINE);
	printf("%s\t|\n", __FUNCTION__);
	printf("\t| positive '%% 5d' = % 5d \n", data);
	printf("\t| negative '%% 5d' = % 5d \n", -data);
}

void	dote(int data)
{
	draw(__FUNCTION__, 0);
	printf("%s\t%s\n", __FUNCTION__, VERTICAL_BLOCK);
	printf("\t%s positive '%%.5d' = %.5d \n", VERTICAL_BLOCK, data);
	printf("\t%s negative '%%.5d' = %.5d \n", VERTICAL_BLOCK, -data);
}

void	zero(int data)
{
	printf("%s\t|\n", __FUNCTION__);
	printf("\t| positive '%%05d' = %05d \n", data);
	printf("\t| negative '%%05d' = %05d \n", -data);
}

int	main(void)
{
	printf("%s ♥  %s", LINE, "┼");
	printf("%c%c%c\n", '\xE2', '\x99', '\xA5');
	printf("%s \n", CROSS);

int n = 8;
printf("%.*s\n", n, "____________________________");
printf("%2$*1$d\n", 5, 9);
 printf("%*d\n", 5, 9);


	int	a = 42;
	printf("%05d\n", a);
#ifdef TEST
	zero(a);
	dote(a);
	space(a);
#endif
}
