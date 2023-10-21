/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 11:20:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

int	get_max_bits(t_node *node)
{
	int	max_content;
	int	max_bits;

	max_content = get_content_in_order(node, ft_nodesize(node));
	max_bits = 0;
	while (max_content >> max_bits)
		max_bits++;
	return (max_bits);
}

void	pa_all(t_data *data)
{
	while (data->stack_b.head)
		pa(data);
}

int	is_ith_bit_1(int order, int bits_ith)
{
	return (((order >> bits_ith) & 1) == 1);
}

void	push_ith_bit_as_1_to_b(t_data *data, int bits_ith)
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
	while (bits_ith <= get_max_bits(data->stack_a.head))
	{
		push_ith_bit_as_1_to_b(data, bits_ith);
		pa_all(data);
		bits_ith++;
	}
}

/* 基数ソートする

	値を二進数変換する
	値（二進数）の最大桁数を取得する
	見る桁数が最大桁数になるまで繰り返す
	値（二進数）を1桁ずつみていく
	{
		// いまみている桁で値をバブルソートする
	}
*/

/* クイックソートする：グループごとに分割して，グループごとにソートしていく

1．pivotを選択する（適当な値をピボットして選択する）
2．pivot未満の要素をスタックbに入れる
スタックbが整列済みになるまで再起的に1と2を繰り返す



基準値（pivot）を決める（基準値：中央値）

グループが1つになるまで繰り返す
{
	「いま指している先頭ノード」が「いま指している後尾ノード」と等しくなるまで繰り返す
	{
		「いま指している先頭ノードの値」が基準値以上になるまで繰り返す
		{
			＜「いま指している先頭ノードの値」が「いま指している後尾ノードの値」より大きい場合＞
			{
				「いま指している先頭ノード」と「いま指している後尾ノード」をスワップする
				「いま指している先頭ノード」を1つ先のノードを指すようにする
				「いま指している後尾ノード」を1つ前のノードを指すようにする
			}
			「いま指している後尾ノード」を1つ前のノードを指すようにする
		}
		「いま指している先頭ノード」を1つ先のノードを指すようにする
	}
}

*/
