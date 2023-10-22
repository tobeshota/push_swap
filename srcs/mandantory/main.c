/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:21 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 20:19:46 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	check_arg(argc, argv);
	data = get_data(argv);
	sort_data(&data);
	free_data(&data);
}

// __attribute__((destructor)) static void destructor()
// {
// 	system("leaks -q push_swap");
// }
