/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 13:02:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

static void	pb_max_2_nodes(t_data *data)
{
	int	first_max_order;
	int	second_max_order;

	first_max_order = ft_nodesize(data->stack_a.head);
	second_max_order = first_max_order - 1;
	ra_until_order(data, first_max_order, second_max_order,
		NOT_SPECIFIED_ORDER);
	pb(data);
	ra_until_order(data, first_max_order, second_max_order,
		NOT_SPECIFIED_ORDER);
	pb(data);
}

void	sort_5_nodes(t_data *data)
{
	pb_max_2_nodes(data);
	sort_3_nodes_a(data);
	sort_2_nodes_b(data);
	push_tail_a(data);
	push_tail_a(data);
}
