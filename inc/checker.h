/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:11:14 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 13:22:04 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

void	exec_operations(t_data *data);
void	check_is_data_sorted(t_data *data);
t_data	get_data_for_checker(char **argv);

#endif
