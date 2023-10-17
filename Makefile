# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/10/17 14:42:43 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc -g
# CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rc
RM			=	rm -rf
LIBFT_DIR	=	libft/
SRCS_DIR	=	srcs/
INCS_DIR	=	inc/
OBJS_DIR	=	objs/

# echo srcs/*.c srcs/**/*.c srcs/**/**/*.c | pbcopy
SRCS		=	srcs/main.c srcs/check_arg/check_arg.c srcs/check_arg/check_is_arg_digit.c srcs/check_arg/check_is_arg_exist.c srcs/check_arg/check_is_arg_int.c srcs/free_data/free_data.c srcs/get_data/get_data.c srcs/get_data/get_data_utils.c srcs/sort_data/sort_data.c srcs/utils/utils.c srcs/sort_data/sort_operations/pa.c srcs/sort_data/sort_operations/pb.c srcs/sort_data/sort_operations/ra.c srcs/sort_data/sort_operations/rb.c srcs/sort_data/sort_operations/rr.c srcs/sort_data/sort_operations/rra.c srcs/sort_data/sort_operations/rrb.c srcs/sort_data/sort_operations/rrr.c srcs/sort_data/sort_operations/sa.c srcs/sort_data/sort_operations/sb.c srcs/sort_data/sort_operations/ss.c srcs/utils/node/ft_nodeadd_back.c srcs/utils/node/ft_nodeadd_front.c srcs/utils/node/ft_nodeclear.c srcs/utils/node/ft_nodedelone.c srcs/utils/node/ft_nodefirst.c srcs/utils/node/ft_nodelast.c srcs/utils/node/ft_nodenew.c srcs/utils/node/ft_nodesize.c

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
	@ $(RM) $(OBJS_DIR)
	@ echo "clean"

fclean:
	@ make fclean -C $(LIBFT_DIR)
	@ $(RM) $(OBJS_DIR)
	@ $(RM) $(NAME) $(B_NAME)
	@ echo "fclean"

re:			fclean all

test:
	make all
	./push_swap 2 1 3 6 5 8

.PHONY:		all bonus clean fclean re
