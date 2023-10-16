/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 20:44:41 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/utils.h"

void exit_with_error(void)
{
	write(STDERR_FILENO, "error\n", 7);
	exit(2);
}

void	check_malloc(void *ptr)
{
	if (ptr == NULL)
		exit_with_error();
}

void	put_data(t_data data)
{
	while (data.stack_a.head || data.stack_b.head)
	{
		if (data.stack_a.head)
		{
			ft_printf("%d", data.stack_a.head->content);
			data.stack_a.head = data.stack_a.head->next;
		}
		ft_printf("\t");
		if (data.stack_b.head)
		{
			ft_printf("%d", data.stack_b.head->content);
			data.stack_b.head = data.stack_b.head->next;
		}
		ft_printf("\n");
	}
	ft_printf("-\t-\na(%d)\tb(%d)\n", data.stack_a.size, data.stack_b.size);
}
