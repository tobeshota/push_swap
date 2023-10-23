/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:30:45 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 13:01:43 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

static void	sort_3_nodes_a_by_cases(t_data *data, int max,
		int mid, int min)
{
	if (data->stack_a.head->content == min
		&& data->stack_a.head->next->content == mid)
		return ;
	else if (data->stack_a.head->content == min
		&& data->stack_a.head->next->content == max)
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == min)
		sa(data);
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == max)
		rra(data);
	else if (data->stack_a.head->content == max
		&& data->stack_a.head->next->content == min)
		ra(data);
	else if (data->stack_a.head->content == max
		&& data->stack_a.head->next->content == mid)
	{
		sa(data);
		rra(data);
	}
}

static void	sort_3_nodes_b_by_cases(t_data *data, int max,
		int mid, int min)
{
	if (data->stack_b.head->content == min
		&& data->stack_b.head->next->content == mid)
		return ;
	else if (data->stack_b.head->content == min
		&& data->stack_b.head->next->content == max)
	{
		sb(data);
		rb(data);
	}
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == min)
		sb(data);
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == max)
		rrb(data);
	else if (data->stack_b.head->content == max
		&& data->stack_b.head->next->content == min)
		rb(data);
	else if (data->stack_b.head->content == max
		&& data->stack_b.head->next->content == mid)
	{
		sb(data);
		rrb(data);
	}
}

void	sort_3_nodes_a(t_data *data)
{
	long	max;
	long	mid;
	long	min;

	max = get_content_in_order(data->stack_a.head,
			get_nth_min_order(data->stack_a.head, 3));
	mid = get_content_in_order(data->stack_a.head,
			get_nth_min_order(data->stack_a.head, 2));
	min = get_content_in_order(data->stack_a.head,
			get_nth_min_order(data->stack_a.head, 1));
	sort_3_nodes_a_by_cases(data, max, mid, min);
}

void	sort_3_nodes_b(t_data *data)
{
	long	max;
	long	mid;
	long	min;

	max = get_content_in_order(data->stack_b.head,
			get_nth_min_order(data->stack_b.head, 3));
	mid = get_content_in_order(data->stack_b.head,
			get_nth_min_order(data->stack_b.head, 2));
	min = get_content_in_order(data->stack_b.head,
			get_nth_min_order(data->stack_b.head, 1));
	sort_3_nodes_b_by_cases(data, max, mid, min);
}
