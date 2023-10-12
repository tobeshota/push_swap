# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 19:52:48 by toshota           #+#    #+#              #
#    Updated: 2023/10/12 20:39:32 by toshota          ###   ########.fr        #
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
# $ echo srcs/**/*.c
OBJS_DIR			= objs/
SRCS_DIR			= srcs/
SRCS				= srcs/main.c srcs/check_data/check_data.c srcs/get_data/get_data.c srcs/sort_data/sort_data.c srcs/utils/utils.c
OBJS				= $(patsubst $(SRCS_DIR)%.c,$(OBJS_DIR)%.o,$(SRCS))

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
