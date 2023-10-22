/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 20:18:51 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

static int	get_max_bits(t_node *node)
{
	int	max_order;
	int	max_bits;

	max_order = ft_nodesize(node);
	max_bits = 0;
	while (max_order >> max_bits)
		max_bits++;
	return (max_bits);
}

static int	is_ith_bit_1(int order, int bits_ith)
{
	return (((order >> bits_ith) & 1) == 1);
}

static void	push_ith_bit_as_1_to_b(t_data *data, int bits_ith)
{
	int	size_i;

	size_i = 0;
	while (size_i < data->stack_a.size)
	{
		if (is_ith_bit_1(data->stack_a.head->order, bits_ith))
			ra(data);
		else
			pb(data);
		size_i++;
	}
}

void	radix_sort(t_data *data)
{
	int	bits_ith;

	bits_ith = 0;
	while (bits_ith < get_max_bits(data->stack_a.head))
	{
		push_ith_bit_as_1_to_b(data, bits_ith);
		pa_all(data);
		bits_ith++;
	}
}
