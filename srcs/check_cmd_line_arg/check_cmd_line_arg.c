/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cmd_line_arg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 16:21:13 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/check_cmd_line_arg.h"

int	is_num_of_digits_in_int(char **cmd_line_argv)
{
	int	arg_i;

	arg_i = 0;
	while (cmd_line_argv[arg_i])
	{
		if(cmd_line_argv[arg_i][0] == '-' && (ft_strlen(cmd_line_argv[arg_i]) != ft_strlen("-2147483648")))
			return FALSE;
		else if(ft_strlen(cmd_line_argv[arg_i]) != ft_strlen("2147483647"))
			return FALSE;
		arg_i++;
	}
	return TRUE;
}

// コマンドライン引数がint型であるかをチェックする
void	check_is_cmd_line_arg_int(char **cmd_line_arg)
{
	// 数字の桁数がint型の範囲かを調べる（long, long long, unsigned long long型対策）
	// if(is_num_of_digits_in_int(cmd_line_arg) == FALSE)
	// 	exit_with_error();
	// 数字をlong型の値に変換する
	// 値をint型にキャストさせ，両者が等しいかを調べる
}

void	check_cmd_line_arg(int argc, char **cmd_line_arg)
{
	check_is_cmd_line_arg_exist(argc);
	check_is_cmd_line_arg_digit(cmd_line_arg);
	// コマンドライン引数がint型であるかをチェックする
	check_is_cmd_line_arg_int(cmd_line_arg);
}
