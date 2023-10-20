/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 16:33:34 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/utils.h"

void	all_free_tab(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		ptr[i] = NULL;
		i++;
	}
	free(ptr);
	ptr = NULL;
}

void	exit_with_error(void)
{
	write(STDERR_FILENO, "error\n", 7);
	exit(2);
}

void	check_malloc(void *ptr)
{
	if (ptr == NULL)
		exit_with_error();
}

void	put_node(t_node *node)
{
	while(node)
	{
		ft_printf("%d ", node->content);
		node = node->next;
	}
	ft_printf("\n");
	ft_nodefirst(&node);
}

void	put_data(t_data data)
{
	data.stack_a.size = ft_nodesize(data.stack_a.head);
	data.stack_b.size = ft_nodesize(data.stack_b.head);
	while (data.stack_a.head || data.stack_b.head)
	{
		if (data.stack_a.head)
		{
			ft_printf("%d[%d]", data.stack_a.head->content, data.stack_a.head->order);
			data.stack_a.head = data.stack_a.head->next;
		}
		ft_printf("\t");
		if (data.stack_b.head)
		{
			ft_printf("%d[%d]", data.stack_b.head->content, data.stack_b.head->order);
			data.stack_b.head = data.stack_b.head->next;
		}
		ft_printf("\n");
	}
	ft_printf("\n-\t-\na(%d)\tb(%d)\n\n", data.stack_a.size, data.stack_b.size);
}
