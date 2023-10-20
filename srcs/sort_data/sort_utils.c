/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:33:35 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 17:31:58 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/sort_data.h"

int	get_content_in_order(t_node *node, int order)
{
	while (node)
	{
		if (node->order == order)
			return (node->content);
		ft_nodenext(&node);
	}
	return (-1);
}

void	ra_until_order(t_data *data, int order_1, int order_2, int order_3)
{
	int	content_1;
	int content_2;
	int content_3;

	content_1 = get_content_in_order(data->stack_a.head, order_1);
	content_2 = get_content_in_order(data->stack_a.head, order_2);
	content_3 = get_content_in_order(data->stack_a.head, order_3);
	while (data->stack_a.head->content != content_1 & data->stack_a.head->content != content_2 && data->stack_a.head->content != content_3)
		ra(data);
}
