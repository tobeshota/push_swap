/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 17:27:38 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_arg.h"

void	check_arg(int argc, char **argv)
{
	check_is_arg_exist(argc);
	check_is_arg_digit(argv);
	check_is_arg_int(argv);
}
