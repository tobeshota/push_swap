/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:21 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 13:25:48 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

int	main(int argc, char **argv)
{
	t_data	data;

	check_arg(argc, argv);
	data = get_data_for_checker(argv);
	exec_operations(&data);
	check_is_data_sorted(&data);
	free_data(&data);
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q checker");
// }
