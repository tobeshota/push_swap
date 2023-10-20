/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:39:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 20:36:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

void	sort_4_nodes(t_data *data)
{
	// 最小値が来るまでraで回す
	ra_until_order(data, 1, NOT_SPECIFIED_ORDER, NOT_SPECIFIED_ORDER);
	// 最小値が来たら，最小値をbに入れる
	pb(data);
	// aをsort_3_nodes();でソートする
	sort_3_nodes_a(data);
	// bの要素をaに入れる
	pa(data);
}
