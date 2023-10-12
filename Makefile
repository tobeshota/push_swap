# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/10/12 17:51:48 by toshota          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	push_swap
CC					=	cc
# CFLAGS				=	-Wall -Wextra -Werror
AR					=	ar rc
RM					=	rm -f

LIBFT_DIR			=	libft/

# INCS
INCS_DIR			=	inc/
INCS_FILES			=	check_data.h define.h get_data.h push_swap.h sort_data.h utils.h
# -I に渡すのは，ディレクトリのパス．ヘッダーファイルではない．
INCS				=	$(addprefix $(INCS_DIR), $(INCS_FILES))

# SRCS
MAIN_SRCS			=	srcs/main.c

GET_DATA_DIR		=	srcs/get_data/
GET_DATA_FILES		=	get_data.c
GET_DATA_SRCS		=	$(addprefix $(GET_DATA_DIR), $(GET_DATA_FILES))

CHECK_DATA_DIR		=	srcs/check_data/
CHECK_DATA_FILES	=	check_data.c
CHECK_DATA_SRCS		=	$(addprefix $(CHECK_DATA_DIR), $(CHECK_DATA_FILES))

SORT_DATA_DIR		=	srcs/sort_data/
SORT_DATA_FILES		=	sort_data.c
SORT_DATA_SRCS		=	$(addprefix $(SORT_DATA_DIR), $(SORT_DATA_FILES))

UTILS_DIR			=	srcs/utils/
UTILS_FILES			=	utils.c
UTILS_SRCS			=	$(addprefix $(UTILS_DIR), $(UTILS_FILES))

OBJS_DIR			= objs
SRCS_DIR			= srcs

SRCS				+= $(GET_DATA_SRCS)
SRCS				+= $(CHECK_DATA_SRCS)
SRCS				+= $(SORT_DATA_SRCS)
SRCS				+= $(UTILS_SRCS)
SRCS				+= $(MAIN_SRCS)


OBJS				= $(patsubst $(SRCS_DIR)/%.c,$(OBJS_DIR)/%.o,$(SRCS))


all:		$(NAME)

$(NAME):	$(OBJS) $(INCS) Makefile
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(LIBFT_DIR)libft.a $(OBJS) -o $(NAME)

# %.o: %.c と同じ
$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean:
	make fclean -C $(LIBFT_DIR)
	$(RM) $(OBJS)
	$(RM) $(NAME) $(B_NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
