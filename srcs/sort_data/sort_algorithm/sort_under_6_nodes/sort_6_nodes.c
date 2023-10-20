/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_6_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 23:09:05 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

void	sort_6_nodes(t_data *data)
{
	int first_largest_order;
	int second_largest_order;
	int thrid_largest_order;

	first_largest_order = ft_nodesize(data->stack_a.head);
	second_largest_order = first_largest_order - 1;
	thrid_largest_order = second_largest_order - 1;

	ra_until_order(data, first_largest_order, second_largest_order, thrid_largest_order);
	pb(data);

	ra_until_order(data, first_largest_order, second_largest_order, thrid_largest_order);
	pb(data);

	ra_until_order(data, first_largest_order, second_largest_order, thrid_largest_order);
	pb(data);

	sort_3_nodes_a(data);
	sort_3_nodes_b_in_descending(data);

	pa(data);
	pa(data);
	pa(data);
	ra(data);
	ra(data);
	ra(data);
}
