/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:56:32 by toshota           #+#    #+#             */
/*   Updated: 2023/10/19 17:05:33 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

static int	get_large(t_data data)
{
	int	result;

	result = INT_MIN;
	while (data.stack_a.head)
	{
		if (result < data.stack_a.head->content)
			result = data.stack_a.head->content;
		data.stack_a.head = data.stack_a.head->next;
	}
	return (result);
}

static int	get_mid(t_data data, int large)
{
	int	result;

	result = INT_MIN;
	while (data.stack_a.head)
	{
		if (result < data.stack_a.head->content
			&& data.stack_a.head->content < large)
			result = data.stack_a.head->content;
		data.stack_a.head = data.stack_a.head->next;
	}
	return (result);
}

static int	get_small(t_data data, int mid)
{
	int	result;

	result = INT_MIN;
	while (data.stack_a.head)
	{
		if (result < data.stack_a.head->content
			&& data.stack_a.head->content < mid)
			result = data.stack_a.head->content;
		data.stack_a.head = data.stack_a.head->next;
	}
	return (result);
}

static void	sort_3_nodes_by_cases(t_data *data, int large, int mid, int small)
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

void	sort_3_nodes(t_data *data)
{
	int	large;
	int	mid;
	int	small;

	large = get_large(*data);
	mid = get_mid(*data, large);
	small = get_small(*data, mid);
	sort_3_nodes_by_cases(data, large, mid, small);
}
