/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nodes_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:56:32 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 16:39:43 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

static void	sort_3_nodes_by_cases(t_data *data, int large, int mid, int small)
{
	if (data->stack_a.head->content == small
		&& data->stack_a.head->next->content == mid)
		return ;
	else if (data->stack_a.head->content == small
			&& data->stack_a.head->next->content == large)
	{
		sb(data);
		rb(data);
	}
	else if (data->stack_a.head->content == mid
			&& data->stack_a.head->next->content == small)
		sb(data);
	else if (data->stack_a.head->content == mid
			&& data->stack_a.head->next->content == large)
		rrb(data);
	else if (data->stack_a.head->content == large
			&& data->stack_a.head->next->content == small)
		rb(data);
	else if (data->stack_a.head->content == large
			&& data->stack_a.head->next->content == mid)
	{
		sb(data);
		rrb(data);
	}
}

void	sort_3_nodes_b(t_data *data)
{
	int	large;
	int	mid;
	int	small;
	int size;

	get_order(data->stack_b.head);
	size = ft_nodesize(data->stack_b.head);
	large = get_content_in_order(data->stack_b.head, size);
	mid = get_content_in_order(data->stack_b.head, size - 1);
	small = get_content_in_order(data->stack_b.head, size - 2);
	sort_3_nodes_by_cases(data, large, mid, small);
}
