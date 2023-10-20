/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nodes_in_descending.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:30:39 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:32:05 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

static void	sort_3_nodes_a_in_descendingby_cases(t_data *data, int large,
		int mid, int small)
{
	if (data->stack_a.head->content == small
		&& data->stack_a.head->next->content == mid)
	{
		sa(data);
		rra(data);
	}
	else if (data->stack_a.head->content == small
		&& data->stack_a.head->next->content == large)
		ra(data);
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == small)
		rra(data);
	else if (data->stack_a.head->content == mid
		&& data->stack_a.head->next->content == large)
		sa(data);
	else if (data->stack_a.head->content == large
		&& data->stack_a.head->next->content == small)
	{
		sa(data);
		ra(data);
	}
	else if (data->stack_a.head->content == large
		&& data->stack_a.head->next->content == mid)
		return ;
}

static void	sort_3_nodes_b_in_descendingby_cases(t_data *data, int large,
		int mid, int small)
{
	if (data->stack_b.head->content == small
		&& data->stack_b.head->next->content == mid)
	{
		sb(data);
		rrb(data);
	}
	else if (data->stack_b.head->content == small
		&& data->stack_b.head->next->content == large)
		rb(data);
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == small)
		rrb(data);
	else if (data->stack_b.head->content == mid
		&& data->stack_b.head->next->content == large)
		sb(data);
	else if (data->stack_b.head->content == large
		&& data->stack_b.head->next->content == small)
	{
		sb(data);
		rb(data);
	}
	else if (data->stack_b.head->content == large
		&& data->stack_b.head->next->content == mid)
		return ;
}

void	sort_3_nodes_a_in_descending(t_data *data)
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
	sort_3_nodes_a_in_descendingby_cases(data, large, mid, small);
}

void	sort_3_nodes_b_in_descending(t_data *data)
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
	sort_3_nodes_b_in_descendingby_cases(data, large, mid, small);
}
