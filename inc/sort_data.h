/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_data.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:43:42 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:12:11 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_DATA_H
# define SORT_DATA_H

# include "define.h"
# include "get_data.h"
# include "utils.h"

void	sort_data(t_data *data);

/* sort_algorithm */
// sort_under_6_nodes
void	sort_under_6_nodes(t_data *data);
void	sort_2_nodes_a(t_data *data);
void	sort_2_nodes_b(t_data *data);
void	sort_2_nodes_a_in_descending(t_data *data);
void	sort_2_nodes_b_in_descending(t_data *data);
void	sort_3_nodes_a(t_data *data);
void	sort_3_nodes_b(t_data *data);
void	sort_3_nodes_a_in_descending(t_data *data);
void	sort_3_nodes_b_in_descending(t_data *data);
void	sort_4_nodes(t_data *data);
void	sort_5_nodes(t_data *data);
void	sort_6_nodes(t_data *data);

// radix_sort
void	radix_sort(t_data *data);

// sort_operations
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

// sort_utils
long	get_content_in_order(t_node *node, int order);
int		get_nth_smallest_order(t_node *node, int nth);
void	ra_until_order(t_data *data, int order_1, int order_2, int order_3);
void	push_tail_a(t_data *data);

#endif
