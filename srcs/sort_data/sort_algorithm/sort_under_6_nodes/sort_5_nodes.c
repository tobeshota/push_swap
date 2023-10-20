/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:31:50 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

static void	pb_largest_2_nodes(t_data *data)
{
	int	first_largest_order;
	int	second_largest_order;

	first_largest_order = ft_nodesize(data->stack_a.head);
	second_largest_order = first_largest_order - 1;
	ra_until_order(data, first_largest_order, second_largest_order,
		NOT_SPECIFIED_ORDER);
	pb(data);
	ra_until_order(data, first_largest_order, second_largest_order,
		NOT_SPECIFIED_ORDER);
	pb(data);
}

void	sort_5_nodes(t_data *data)
{
	pb_largest_2_nodes(data);
	sort_3_nodes_a(data);
	sort_2_nodes_b(data);
	push_tail_a(data);
	push_tail_a(data);
}
