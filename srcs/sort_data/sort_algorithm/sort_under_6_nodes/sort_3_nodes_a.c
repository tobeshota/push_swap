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

void store_order_in_array(int *order_array, t_node *node)
{
	int i;

	i = 0;
	while(node)
	{
		order_array[i] = node->order;
		ft_nodenext(&node);
		i++;
	}
}

void	bubble_sort_array(int *array, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	get_nth_smallest_order(t_node *node, int nth)
{
	int *order_array;
	int result;
	int size;

	size = ft_nodesize(node);
	order_array = (int *)malloc(size * sizeof(int));
	check_malloc(order_array);
	store_order_in_array(order_array, node);
	bubble_sort_array(order_array, size);
	result = order_array[nth - 1];
	free(order_array);
	order_array = NULL;
	return result;
}

void	sort_3_nodes_a(t_data *data)
{
	long 	large;
	long	mid;
	long	small;
	// int	size;

	// orderを変えるよりも「n番目に大きいorder」を取得した方が良い．get_nth_largest_order();つくる
	// get_order(data->stack_a.head);
	// size = ft_nodesize(data->stack_a.head);
	large = get_content_in_order(data->stack_a.head, get_nth_smallest_order(data->stack_a.head, 3));
	mid = get_content_in_order(data->stack_a.head, get_nth_smallest_order(data->stack_a.head, 2));
	small = get_content_in_order(data->stack_a.head, get_nth_smallest_order(data->stack_a.head, 1));
	sort_3_nodes_by_cases(data, large, mid, small);
ft_printf("━▶︎%d\n", get_nth_smallest_order(data->stack_a.head, 3));
ft_printf("━▶︎%d\n", get_nth_smallest_order(data->stack_a.head, 2));
ft_printf("━▶︎%d\n", get_nth_smallest_order(data->stack_a.head, 1));
}
