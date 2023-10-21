/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:11:14 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 07:59:25 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"

void	exec_operations(t_data *data);
void	check_is_node_sorted(t_node *node);

// sort_operations_without_msg
void	sa_without_msg(t_data *data);
void	sb_without_msg(t_data *data);
void	ss_without_msg(t_data *data);
void	pa_without_msg(t_data *data);
void	pb_without_msg(t_data *data);
void	ra_without_msg(t_data *data);
void	rb_without_msg(t_data *data);
void	rr_without_msg(t_data *data);
void	rra_without_msg(t_data *data);
void	rrb_without_msg(t_data *data);
void	rrr_without_msg(t_data *data);

#endif
