/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:54 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 17:27:27 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_DATA_H
# define CHECK_DATA_H

# include "define.h"
# include "utils.h"

void	check_arg(int argc, char **arg);
void	check_is_arg_exist(int argc);
void	check_is_arg_digit(char **argv);
void	check_is_arg_int(char **arg);

#endif
