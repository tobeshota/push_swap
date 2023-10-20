/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:30:45 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:41:52 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

static void	sort_3_nodes_a_by_cases(t_data *data, int large,
		int mid, int small)
{
	if (data->stack_a.head->content == small
		&& data->stack_a.head->next->content == mid)
		return ;
	else if (data->stack_a.head->content == small
		&& data->stack_a.head->next->content == large)
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == small)
		sa(data);
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == large)
		rra(data);
	else if (data->stack_a.head->content == large
		&& data->stack_a.head->next->content == small)
		ra(data);
	else if (data->stack_a.head->content == large
		&& data->stack_a.head->next->content == mid)
	{
		sa(data);
		rra(data);
	}
}

static void	sort_3_nodes_b_by_cases(t_data *data, int large,
		int mid, int small)
{
	if (data->stack_b.head->content == small
		&& data->stack_b.head->next->content == mid)
		return ;
	else if (data->stack_b.head->content == small
		&& data->stack_b.head->next->content == large)
	{
		sb(data);
		rb(data);
	}
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == small)
		sb(data);
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == large)
		rrb(data);
	else if (data->stack_b.head->content == large
		&& data->stack_b.head->next->content == small)
		rb(data);
	else if (data->stack_b.head->content == large
		&& data->stack_b.head->next->content == mid)
	{
		sb(data);
		rrb(data);
	}
}

void	sort_3_nodes_a(t_data *data)
{
	long	large;
	long	mid;
	long	small;

	large = get_content_in_order(data->stack_a.head,
			get_nth_smallest_order(data->stack_a.head, 3));
	mid = get_content_in_order(data->stack_a.head,
			get_nth_smallest_order(data->stack_a.head, 2));
	small = get_content_in_order(data->stack_a.head,
			get_nth_smallest_order(data->stack_a.head, 1));
	sort_3_nodes_a_by_cases(data, large, mid, small);
}

void	sort_3_nodes_b(t_data *data)
{
	long	large;
	long	mid;
	long	small;

	large = get_content_in_order(data->stack_b.head,
			get_nth_smallest_order(data->stack_b.head, 3));
	mid = get_content_in_order(data->stack_b.head,
			get_nth_smallest_order(data->stack_b.head, 2));
	small = get_content_in_order(data->stack_b.head,
			get_nth_smallest_order(data->stack_b.head, 1));
	sort_3_nodes_b_by_cases(data, large, mid, small);
}
