/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nth_smallest_order.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:06:34 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:29:14 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

static void	store_order_in_array(int *order_array, t_node *node)
{
	int	i;

	i = 0;
	while (node)
	{
		order_array[i] = node->order;
		ft_nodenext(&node);
		i++;
	}
}

static void	bubble_sort_array(int *array, int size)
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
	int	*order_array;
	int	result;
	int	size;

	size = ft_nodesize(node);
	order_array = (int *)malloc(size * sizeof(int));
	check_malloc(order_array);
	store_order_in_array(order_array, node);
	bubble_sort_array(order_array, size);
	result = order_array[nth - 1];
	free(order_array);
	order_array = NULL;
	return (result);
}
