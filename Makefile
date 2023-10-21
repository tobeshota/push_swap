# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/10/21 23:36:43 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
B_NAME		=	checker
CC			=	cc -g
CFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rc
RM			=	rm -rf
LIBFT_DIR	=	libft/
SRCS_DIR	=	srcs/
M_SRCS_DIR	=	srcs/mandantory/
B_SRCS_DIR	=	srcs/bonus/
INCS_DIR	=	inc/
OBJS_DIR	=	objs/
M_OBJS_DIR	=	objs/mandantory/
B_OBJS_DIR	=	objs/bonus/

# echo srcs/**/*.c srcs/**/**/*.c srcs/**/**/**/*.c srcs/**/**/**/**/*.c | pbcopy
# echo srcs/**/*.c | pbcopy
M_SRCS		=	srcs/mandantory/main.c srcs/mandantory/check_arg/check_arg.c srcs/mandantory/check_arg/check_is_arg_digit.c srcs/mandantory/check_arg/check_is_arg_exist.c srcs/mandantory/check_arg/check_is_arg_int.c srcs/mandantory/free_data/free_data.c srcs/mandantory/get_data/get_data.c srcs/mandantory/get_data/get_data_utils.c srcs/mandantory/get_data/get_nth_smallest_order.c srcs/mandantory/sort_data/sort_data.c srcs/mandantory/sort_data/sort_utils.c srcs/mandantory/utils/utils.c srcs/mandantory/sort_data/sort_operations/pa.c srcs/mandantory/sort_data/sort_operations/pb.c srcs/mandantory/sort_data/sort_operations/ra.c srcs/mandantory/sort_data/sort_operations/rb.c srcs/mandantory/sort_data/sort_operations/rr.c srcs/mandantory/sort_data/sort_operations/rra.c srcs/mandantory/sort_data/sort_operations/rrb.c srcs/mandantory/sort_data/sort_operations/rrr.c srcs/mandantory/sort_data/sort_operations/sa.c srcs/mandantory/sort_data/sort_operations/sb.c srcs/mandantory/sort_data/sort_operations/ss.c srcs/mandantory/utils/node/add_first_node_to_last_node.c srcs/mandantory/utils/node/add_last_node_to_first_node.c srcs/mandantory/utils/node/del_beginning_node.c srcs/mandantory/utils/node/del_end_node.c srcs/mandantory/utils/node/ft_nodeadd_back.c srcs/mandantory/utils/node/ft_nodeadd_front.c srcs/mandantory/utils/node/ft_nodeclear.c srcs/mandantory/utils/node/ft_nodedelone.c srcs/mandantory/utils/node/ft_nodefirst.c srcs/mandantory/utils/node/ft_nodelast.c srcs/mandantory/utils/node/ft_nodenew.c srcs/mandantory/utils/node/ft_nodenext.c srcs/mandantory/utils/node/ft_nodesize.c srcs/mandantory/utils/node/is_node_sorted.c srcs/mandantory/sort_data/sort_algorithm/radix_sort/radix_sort.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_2_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_2_nodes_in_descending.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_3_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_3_nodes_in_descending.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_4_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_5_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_6_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_under_6_nodes.c
B_SRCS		=	srcs/bonus/checker.c srcs/bonus/checker_utils.c srcs/mandantory/check_arg/check_arg.c srcs/mandantory/check_arg/check_is_arg_digit.c srcs/mandantory/check_arg/check_is_arg_exist.c srcs/mandantory/check_arg/check_is_arg_int.c srcs/mandantory/free_data/free_data.c srcs/mandantory/get_data/get_data.c srcs/mandantory/get_data/get_data_utils.c srcs/mandantory/get_data/get_nth_smallest_order.c srcs/mandantory/sort_data/sort_data.c srcs/mandantory/sort_data/sort_utils.c srcs/mandantory/utils/utils.c srcs/mandantory/sort_data/sort_operations/pa.c srcs/mandantory/sort_data/sort_operations/pb.c srcs/mandantory/sort_data/sort_operations/ra.c srcs/mandantory/sort_data/sort_operations/rb.c srcs/mandantory/sort_data/sort_operations/rr.c srcs/mandantory/sort_data/sort_operations/rra.c srcs/mandantory/sort_data/sort_operations/rrb.c srcs/mandantory/sort_data/sort_operations/rrr.c srcs/mandantory/sort_data/sort_operations/sa.c srcs/mandantory/sort_data/sort_operations/sb.c srcs/mandantory/sort_data/sort_operations/ss.c srcs/mandantory/utils/node/add_first_node_to_last_node.c srcs/mandantory/utils/node/add_last_node_to_first_node.c srcs/mandantory/utils/node/del_beginning_node.c srcs/mandantory/utils/node/del_end_node.c srcs/mandantory/utils/node/ft_nodeadd_back.c srcs/mandantory/utils/node/ft_nodeadd_front.c srcs/mandantory/utils/node/ft_nodeclear.c srcs/mandantory/utils/node/ft_nodedelone.c srcs/mandantory/utils/node/ft_nodefirst.c srcs/mandantory/utils/node/ft_nodelast.c srcs/mandantory/utils/node/ft_nodenew.c srcs/mandantory/utils/node/ft_nodenext.c srcs/mandantory/utils/node/ft_nodesize.c srcs/mandantory/utils/node/is_node_sorted.c srcs/mandantory/sort_data/sort_algorithm/radix_sort/radix_sort.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_2_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_2_nodes_in_descending.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_3_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_3_nodes_in_descending.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_4_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_5_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_6_nodes.c srcs/mandantory/sort_data/sort_algorithm/sort_under_6_nodes/sort_under_6_nodes.c

M_OBJS		=	$(patsubst $(M_SRCS_DIR)%.c, $(M_OBJS_DIR)%.o, $(M_SRCS))
B_OBJS		=	$(patsubst $(B_SRCS_DIR)%.c, $(B_OBJS_DIR)%.o, $(B_SRCS))


all:		$(NAME)

$(NAME):	$(M_OBJS) Makefile
	@ make bonus -C $(LIBFT_DIR)
	@ $(CC) $(CFLAGS) $(LIBFT_DIR)libft.a -I $(INCS_DIR) $(M_OBJS) -o $(NAME)
	@ echo "compile to create an executable file: ./$@"

bonus:		$(B_NAME)

$(B_NAME):	$(B_OBJS) Makefile
	@ make bonus -C $(LIBFT_DIR)
	@ $(CC) $(CFLAGS) $(LIBFT_DIR)libft.a -I $(INCS_DIR) $(B_OBJS) -o $(B_NAME)
	@ echo "compile to create an executable file: ./$@"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c
	@ mkdir -p $(@D)
	@ $(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	@ make clean -C $(LIBFT_DIR)
	@ $(RM) $(OBJS_DIR)
	@ echo $@

fclean:
	@ make fclean -C $(LIBFT_DIR)
	@ $(RM) $(OBJS_DIR)
	@ $(RM) $(NAME) $(B_NAME)
	@ echo $@

re:			fclean all

test:
	make all
	./push_swap 2 1 3 6 5 8

pain:
	make all
	./pain/pain.sh

.PHONY:		all bonus clean fclean re test pain
