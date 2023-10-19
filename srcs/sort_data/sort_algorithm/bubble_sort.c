/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:56:32 by toshota           #+#    #+#             */
/*   Updated: 2023/10/19 14:57:10 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	bubble_sort_a(t_data *data)
{
	t_node	*head;

	head = data->stack_a.head;
	while (is_stack_sorted(data->stack_a) == FALSE)
	{
		while (data->stack_a.head->next)
		{
			if (data->stack_a.head->content > data->stack_a.head->next->content)
				sa(data);
			data->stack_a.head = data->stack_a.head->next;
		}
		data->stack_a.head = head;
	}
}
