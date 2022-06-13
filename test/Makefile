# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yboudoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 11:34:57 by yboudoui          #+#    #+#              #
#    Updated: 2022/06/13 22:12:21 by yboudoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG			= "d"
NAME			=	a.out

CC				=	clang -Wall -Werror -Wextra #-Wno-format -g3
VLGD			=	valgrind --track-origins=yes --leak-check=full
RM				=	rm -f

#------------------------------------------------------------------------------#

DIR_TO_TEST		=	../
LIBFT_PRINTF	=	$(DIR_TO_TEST)libftprintf.a

SRC				=	presentation.c\
					ft_test_ptr.c\
					ft_test_str.c\
					ft_test_hex.c\
					ft_test_int.c\
					ft_test_unsigned.c\
					main.c

OBJS			=	$(SRC:.c=.o)

.c.o:
			$(CC) $(CFLAGS)  -c $< -o $(<:.c=.o)

#------------------------------------------------------------------------------#
clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

$(NAME):	$(OBJS)
			$(MAKE) re -C $(DIR_TO_TEST) -s
			$(MAKE) clean -C $(DIR_TO_TEST) -s
			$(CC) -Wno-format $(OBJS) $(LIBFT_PRINTF)
			$(MAKE) clean
			clear
			$(VLGD) ./a.out $(FLAG)

all:		$(NAME)

bonus:	all


.PHONY:		all clean fclean re bonus
