# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/10/13 15:45:28 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
# CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rc
RM			=	rm -f
LIBFT_DIR	=	libft/
SRCS_DIR	=	srcs/
INCS_DIR	=	inc/
OBJS_DIR	=	objs/

# echo srcs/**/*.c
# srcs/main.c も忘れずに
SRCS		= srcs/main.c srcs/check_cmd_line_arg/check_cmd_line_arg.c srcs/check_cmd_line_arg/check_is_cmd_line_arg_digit.c srcs/check_cmd_line_arg/check_is_cmd_line_arg_exist.c srcs/get_data/get_data.c srcs/sort_data/sort_data.c srcs/utils/utils.c

OBJS		= $(patsubst $(SRCS_DIR)%.c, $(OBJS_DIR)%.o, $(SRCS))



all:		$(NAME)

$(NAME):	$(OBJS) Makefile
	@ make bonus -C $(LIBFT_DIR)
	@ $(CC) $(CFLAGS) $(LIBFT_DIR)libft.a $(OBJS) -o $(NAME)
	@ echo "compile to create an executable file: ./$(NAME)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	@ mkdir -p $(@D)
	@ $(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	@ make clean -C $(LIBFT_DIR)
	@ $(RM) $(OBJS)
	@ echo "clean"

fclean:
	@ make fclean -C $(LIBFT_DIR)
	@ $(RM) $(OBJS)
	@ $(RM) $(NAME) $(B_NAME)
	@ echo "fclean"

re:			fclean all

.PHONY:		all bonus clean fclean re
