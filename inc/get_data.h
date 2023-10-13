/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:30 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 15:06:51 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_DATA_H
# define GET_DATA_H

#include "define.h"
#include "utils.h"

void get_data(int argc, char **argv, t_data *data);
void check_arg(int argc, char **cmd_line_argv);

#endif
