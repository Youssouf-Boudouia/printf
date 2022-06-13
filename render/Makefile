# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yboudoui <yboudoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 13:40:44 by yboudoui          #+#    #+#              #
#    Updated: 2022/06/14 00:45:30 by yboudoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a

#-----------------------------------------------------------------------------#

UTILS_DIR			=	utils/

UTILS_FILES_HEADER	=	utils.h

UTILS_FILES_SRC		=	ft_t_str.c\
						ft_itoa_base.c

UTILS_HEADER		=	$(addprefix $(UTILS_DIR), $(UTILS_FILES_HEADER))

UTILS_SRC			=	$(addprefix $(UTILS_DIR), $(UTILS_FILES_SRC))

UTILS_OBJS			=	$(UTILS_SRC:.c=.o)

#-----------------------------------------------------------------------------#

FLAGS_DIR			=	flags/

FLAGS_FILES_HEADER	=	flags.h

FLAGS_FILES_SRC		=	ft_hashtag.c\
						ft_scalar_data.c

FLAGS_HEADER		=	$(addprefix $(FLAGS_DIR), $(FLAGS_FILES_HEADER))

FLAGS_SRC			=	$(addprefix $(FLAGS_DIR), $(FLAGS_FILES_SRC))

FLAGS_OBJS			=	$(FLAGS_SRC:.c=.o)

#-----------------------------------------------------------------------------#

TYPES_DIR			=	types/

TYPES_FILES_HEADER	=	types.h

TYPES_FILES_SRC		=	types.c\
						ft_default.c\
						ft_char.c\
						ft_scalar.c\
						ft_str.c\
						ft_percentage.c

TYPES_HEADER		=	$(addprefix $(TYPES_DIR), $(TYPES_FILES_HEADER))

TYPES_SRC			=	$(addprefix $(TYPES_DIR), $(TYPES_FILES_SRC))

TYPES_OBJS			=	$(TYPES_SRC:.c=.o)

#-----------------------------------------------------------------------------#

DIR					=	./

FILES_HEADER		=	ft_printf.h\
						ft_format.h

FILES_SRC			=	ft_printf.c\
						ft_parser.c\
						ft_formater.c

SRC					=	$(addprefix $(DIR), $(FILES_SRC))

HEADER				=	$(addprefix $(DIR), $(FILES_HEADER))

OBJS				=	$(SRC:.c=.o)

#-----------------------------------------------------------------------------#

CC					=	gcc

CFLAGS				=	-Wall -Wextra -Werror -g3

RM					=	rm -f

.c.o:
			$(CC) $(CFLAGS)  -c $< -o $(<:.c=.o)

$(NAME):	$(UTILS_OBJS) $(FLAGS_OBJS) $(TYPES_OBJS) $(OBJS)
				$(MAKE) bonus -C ./libft
				cp ./libft/libft.a .
				mv libft.a $(NAME)
				ar rcs $(NAME) $(UTILS_OBJS) $(FLAGS_OBJS) $(TYPES_OBJS) $(OBJS)

all:		$(NAME)

bonus:		all
clean:
				$(RM) $(UTILS_OBJS) $(TYPES_OBJS) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
