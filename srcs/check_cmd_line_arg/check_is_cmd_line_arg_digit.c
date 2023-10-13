/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_cmd_line_arg_digit.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:06:31 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 16:36:10 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

static int	ft_issign(int c)
{
	return (c == '+' || c == '-');
}

static int	is_cmd_line_arg_consists_of_num_or_sign(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) == FALSE && ft_issign(*str) == FALSE)
			return (FALSE);
		str++;
	}
	return (TRUE);
}

static int	is_cmd_line_arg_contains_num(char *str)
{
	while (*str)
	{
		if (ft_isdigit(*str) == TRUE)
			return (TRUE);
		str++;
	}
	return (FALSE);
}

static int	is_sign_exist_other_than_bos(char *str)
{
	str++;
	while (*str)
	{
		if (ft_issign(*str) == TRUE)
			return (FALSE);
		str++;
	}
	return (TRUE);
}

/* コマンドライン引数は数字であるかをチェックする
 * 1．コマンドライン引数の個々の要素が数字または符号によって構成されているかを調べる（━▶︎'one'をはじく）
 * 2．コマンドライン引数の個々の要素に数字が1つ以上含まれているかを調べる（━▶︎'+'や'-'をはじく）
 * 3．符号が文頭以外にないかを調べる（━▶︎'++++10'や'42-555'をはじく）
 */
// ＊0042は42とみなした
// （∵　bashで`expr 8 + 0042`を実行すると`50`が標準出力に出力されることから，bashでは0042を42と同義を見なしているため）
void	check_is_cmd_line_arg_digit(char **cmd_line_arg)
{
	int	arg_i;

	arg_i = 0;
	while (cmd_line_arg[arg_i])
	{
		if (is_cmd_line_arg_consists_of_num_or_sign(cmd_line_arg[arg_i]) == FALSE)
			exit_with_error();
		if (is_cmd_line_arg_contains_num(cmd_line_arg[arg_i]) == FALSE)
			exit_with_error();
		if (is_sign_exist_other_than_bos(cmd_line_arg[arg_i]) == FALSE)
			exit_with_error();
		arg_i++;
	}
}
