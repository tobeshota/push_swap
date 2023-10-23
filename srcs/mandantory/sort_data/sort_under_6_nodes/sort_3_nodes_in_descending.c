/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nodes_in_descending.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:30:39 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 12:30:17 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

static void	sort_3_nodes_a_in_descendingby_cases(t_data *data, int max,
		int mid, int min)
{
	if (data->stack_a.head->content == min
		&& data->stack_a.head->next->content == mid)
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a.head->content == min
		&& data->stack_a.head->next->content == max)
		ra(data);
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == min)
		rra(data);
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == max)
		sa(data);
	else if (data->stack_a.head->content == max
		&& data->stack_a.head->next->content == min)
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a.head->content == max
		&& data->stack_a.head->next->content == mid)
		return ;
}

static void	sort_3_nodes_b_in_descendingby_cases(t_data *data, int max,
		int mid, int min)
{
	if (data->stack_b.head->content == min
		&& data->stack_b.head->next->content == mid)
	{
		sb(data);
		rrb(data);
	}
	else if (data->stack_b.head->content == min
		&& data->stack_b.head->next->content == max)
		rb(data);
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == min)
		rrb(data);
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == max)
		sb(data);
	else if (data->stack_b.head->content == max
		&& data->stack_b.head->next->content == min)
	{
		sb(data);
		rb(data);
	}
	else if (data->stack_b.head->content == max
		&& data->stack_b.head->next->content == mid)
		return ;
}

void	sort_3_nodes_a_in_descending(t_data *data)
{
	long	max;
	long	mid;
	long	min;

	max = get_content_in_order(data->stack_a.head,
			get_nth_smallest_order(data->stack_a.head, 3));
	mid = get_content_in_order(data->stack_a.head,
			get_nth_smallest_order(data->stack_a.head, 2));
	min = get_content_in_order(data->stack_a.head,
			get_nth_smallest_order(data->stack_a.head, 1));
	sort_3_nodes_a_in_descendingby_cases(data, max, mid, min);
}

void	sort_3_nodes_b_in_descending(t_data *data)
{
	long	max;
	long	mid;
	long	min;

	max = get_content_in_order(data->stack_b.head,
			get_nth_smallest_order(data->stack_b.head, 3));
	mid = get_content_in_order(data->stack_b.head,
			get_nth_smallest_order(data->stack_b.head, 2));
	min = get_content_in_order(data->stack_b.head,
			get_nth_smallest_order(data->stack_b.head, 1));
	sort_3_nodes_b_in_descendingby_cases(data, max, mid, min);
}
