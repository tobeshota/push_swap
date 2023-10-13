/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cmd_line_arg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 17:27:38 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/check_cmd_line_arg.h"

void	check_cmd_line_arg(int argc, char **cmd_line_arg)
{
	check_is_cmd_line_arg_exist(argc);
	check_is_cmd_line_arg_digit(cmd_line_arg);
	check_is_cmd_line_arg_int(cmd_line_arg);
}
