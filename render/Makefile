# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 13:40:44 by yboudoui          #+#    #+#              #
#    Updated: 2022/05/31 10:25:52 by yboudoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a

UTILS_DIR			=	utils/

UTILS_FILES_HEADER	=	utils.h

UTILS_FILES_SRC		=	ft_itoa_base.c\
						ft_strlen.c

UTILS_HEADER		=	$(addprefix $(UTILS_DIR), $(UTILS_FILES_HEADER))

UTILS_SRC			=	$(addprefix $(UTILS_DIR), $(UTILS_FILES_SRC))

UTILS_OBJS			=	$(UTILS_SRC:.c=.o)

TYPES_DIR			=	types/

TYPES_FILES_HEADER	=	types.h

TYPES_FILES_SRC		=	ft_init.c\
						ft_char.c\
						ft_int.c\
						ft_ptr.c\
						ft_str.c\
						ft_uint.c\
						ft_uint_hex_maj.c\
						ft_uint_hex_min.c\
						ft_default.c\
						ft_percentage.c

TYPES_HEADER		=	$(addprefix $(TYPES_DIR), $(TYPES_FILES_HEADER))

TYPES_SRC			=	$(addprefix $(TYPES_DIR), $(TYPES_FILES_SRC))

TYPES_OBJS			=	$(TYPES_SRC:.c=.o)

DIR					=	
FILES_HEADER		=	ft_printf.h
FILES_SRC			=	ft_printf.c
SRC					=	$(addprefix $(DIR), $(FILES_SRC))
HEADER				=	$(addprefix $(DIR), $(FILES_HEADER))
OBJS				=	$(SRC:.c=.o)

CC					=	gcc

CFLAGS				=	-Wall -Wextra -Werror -g3

RM					=	rm -f

.c.o:
			$(CC) $(CFLAGS)  -c $< -o $(<:.c=.o)

$(NAME):	$(UTILS_OBJS) $(TYPES_OBJS) $(OBJS)
				ar rcs $(NAME) $(UTILS_OBJS) $(TYPES_OBJS) $(OBJS)

all:		$(NAME)

clean:
				$(RM) $(UTILS_OBJS) $(TYPES_OBJS) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
