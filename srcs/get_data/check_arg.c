/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:06:31 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 15:08:23 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

static int	ft_issign(int c)
{
	return (c == '+' || c == '-');
}

static int	is_cmd_line_argv_consists_of_num_or_sign(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) == FALSE && ft_issign(*str) == FALSE)
			return (FALSE);
		str++;
	}
	return (TRUE);
}

static int	is_cmd_line_argv_contains_num(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) == TRUE)
			return (TRUE);
		str++;
	}
	return (FALSE);
}

static int	is_cmd_line_arg_exist(int argc)
{
	return (argc > 1);
}

/* コマンドライン引数をチェックする
 * 1．コマンドライン引数が存在するかを調べる
 * 2．コマンドライン引数の個々の要素が数字または符号によって構成されているかを調べる
 * 3．コマンドライン引数の個々の要素に数字が1つ以上含まれているかを調べる
 */
void	check_arg(int argc, char **cmd_line_argv)
{
	int	i;

	i = 0;
	if (is_cmd_line_arg_exist(argc) == FALSE)
		exit_with_error();
	while (cmd_line_argv[i])
	{
		if (is_cmd_line_argv_consists_of_num_or_sign(cmd_line_argv[i]) == FALSE)
			exit_with_error();
		if (is_cmd_line_argv_contains_num(cmd_line_argv[i]) == FALSE)
			exit_with_error();
		i++;
	}
}
