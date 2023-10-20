/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 23:07:07 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

void	sort_5_nodes(t_data *data)
{
	int first_largest_order;
	int second_largest_order;

	first_largest_order = ft_nodesize(data->stack_a.head);
	second_largest_order = first_largest_order - 1;
	// 最小値または最小値より1つ大きい数が来るまでraで回す
	ra_until_order(data, first_largest_order, second_largest_order, NOT_SPECIFIED_ORDER);
	// 来たらbに入れる
	pb(data);
	// 最小値または最小値より1つ大きい数が来るまでraで回す
	ra_until_order(data, first_largest_order, second_largest_order, NOT_SPECIFIED_ORDER);
	// 来たらbに入れる
	pb(data);
	// aをsort_2_nodes();でソートする
	sort_3_nodes_a(data);
	sort_2_nodes_b_in_descending(data);
	// bの要素をaに入れる
	pa(data);
	pa(data);
	ra(data);
	ra(data);
}