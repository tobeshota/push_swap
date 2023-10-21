/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_arg_digit.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:06:31 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 17:37:10 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_data.h"

static int	ft_issign(int c)
{
	return (c == '+' || c == '-');
}

static int	is_arg_consists_of_num_or_sign(char *argv)
{
	while (*argv)
	{
		if (ft_isdigit(*argv) == FALSE && ft_issign(*argv) == FALSE)
			return (FALSE);
		argv++;
	}
	return (TRUE);
}

static int	is_arg_contains_num(char *argv)
{
	while (*argv)
	{
		if (ft_isdigit(*argv) == TRUE)
			return (TRUE);
		argv++;
	}
	return (FALSE);
}

static int	is_sign_exist_other_than_bos(char *argv)
{
	argv++;
	while (*argv)
	{
		if (ft_issign(*argv) == TRUE)
			return (FALSE);
		argv++;
	}
	return (TRUE);
}

void	check_is_arg_digit(char **argv)
{
	int	arg_i;

	arg_i = 1;
	while (argv[arg_i])
	{
		if (is_arg_consists_of_num_or_sign(argv[arg_i]) == FALSE)
			exit_with_error();
		if (is_arg_contains_num(argv[arg_i]) == FALSE)
			exit_with_error();
		if (is_sign_exist_other_than_bos(argv[arg_i]) == FALSE)
			exit_with_error();
		arg_i++;
	}
}
