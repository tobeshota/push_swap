/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 11:17:25 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

static void	pb_max_1_node(t_data *data)
{
	ra_until_order(data, 1, NOT_SPECIFIED_ORDER, NOT_SPECIFIED_ORDER);
	pb(data);
}

void	sort_4_nodes(t_data *data)
{
	pb_max_1_node(data);
	sort_3_nodes_a(data);
	pa(data);
}
