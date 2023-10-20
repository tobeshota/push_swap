/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:21 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 23:02:07 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
./push_swap 2 1 3 6 5 8
ARG="3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
*/
int	main(int argc, char **argv)
{
	t_data	data;

// argv = ft_split("./push_swap 2 3 1 4", ' ');
// argc = 5;

	check_arg(argc, argv);
	data = get_data(argv);
	sort_data(&data);
put_data(data);
	free_data(&data);
// all_free_tab(argv);
}

__attribute__((destructor)) static void destructor()
{
	system("leaks -q push_swap");
}

/* push_swap やることリスト

1．12個のルールをつくる
2．引数が適切であるかをチェックする
3．ルールをもとにクイックソートをする

1．12個のルールをつくる
──
1．線形リストを理解する（最後のノードにはNULLが入っている）
2．線形リストを用いて12個ルールをつくる

2．ソート対象となるデータが適切であるかをチェックする
──
1．引数が存在するかチェックする
2．引数が数字であるかチェックする
3．引数がint型であるかチェックする
4．データは唯一のものであるか（重複がないか）チェックする

3．ルールをもとにソートをする
──
1．ソートを理解する
2．2つのスタックを用いてソートをつくる

*/
