/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_arg_int.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 17:37:13 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/check_arg.h"

static long	ft_atol(const char *str)
{
	int		sign;
	long	lnb;

	sign = 1;
	lnb = 0;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		lnb = (lnb * 10) + (*str - '0');
		str++;
	}
	return (lnb * sign);
}

static int	is_num_of_digits_in_int(char *argv)
{
	if (argv[0] == '-')
	{
		if (ft_strlen(argv) > ft_strlen("-2147483648"))
			return (FALSE);
	}
	else
	{
		if (ft_strlen(argv) > ft_strlen("2147483647"))
			return (FALSE);
	}
	return (TRUE);
}

static int	check_is_num_in_int(char *argv)
{
	return (ft_atoi(argv) == ft_atol(argv));
}

/* コマンドライン引数がint型であるかをチェックする
 * 数字の桁数がint型の範囲かを調べる（これで残るのはint型とlong型のみ）
 * 数字をint型に変換したものとlong型に変換したものが等しいかを調べる（これで残るにはint型のみ）
 */
void	check_is_arg_int(char **argv)
{
	int	arg_i;

	arg_i = 1;
	while (argv[arg_i])
	{
		if (is_num_of_digits_in_int(argv[arg_i]) == FALSE)
			exit_with_error();
		if (check_is_num_in_int(argv[arg_i]) == FALSE)
			exit_with_error();
		arg_i++;
	}
}
