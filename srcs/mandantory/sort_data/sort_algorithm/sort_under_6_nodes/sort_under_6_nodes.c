/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_6_nodes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:51:58 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 12:36:14 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

void	sort_under_6_nodes(t_data *data)
{
	if (data->stack_a.size == 1)
		return ;
	else if (data->stack_a.size == 2)
		sort_2_nodes_a(data);
	else if (data->stack_a.size == 3)
		sort_3_nodes_a(data);
	else if (data->stack_a.size == 4)
		sort_4_nodes(data);
	else if (data->stack_a.size == 5)
		sort_5_nodes(data);
	else if (data->stack_a.size == 6)
		sort_6_nodes(data);
}
