/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:33:35 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 12:34:08 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

long	get_content_in_order(t_node *node, int order)
{
	while (node)
	{
		if (node->order == order)
			return (node->content);
		ft_nodenext(&node);
	}
	return (NOT_SPECIFIED);
}

void	ra_until_order(t_data *data, int order_1, int order_2, int order_3)
{
	long	content_1;
	long	content_2;
	long	content_3;

	content_1 = get_content_in_order(data->stack_a.head, order_1);
	content_2 = get_content_in_order(data->stack_a.head, order_2);
	content_3 = get_content_in_order(data->stack_a.head, order_3);
	while (data->stack_a.head->content != content_1 \
		& data->stack_a.head->content != content_2
		&& data->stack_a.head->content != content_3)
		ra(data);
}

void	push_tail_a(t_data *data)
{
	pa(data);
	ra(data);
}

void	pa_all(t_data *data)
{
	while (data->stack_b.head)
		pa(data);
}
