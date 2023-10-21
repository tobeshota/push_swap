/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:21 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 08:28:35 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int	main(int argc, char **argv)
{
	t_data	data;

	check_arg(argc, argv);
	data = get_data(argv);
	exec_operations(&data);
	check_is_node_sorted(data.stack_a.head);
	free_data(&data);
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q checker");
// }
