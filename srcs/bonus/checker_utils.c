/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:31:24 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 23:52:16 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static void	exit_with_ok(void)
{
	ft_printf("OK\n");
	exit(0);
}

static void	exit_with_ko(void)
{
	ft_printf("KO\n");
	exit(0);
}

void	check_is_node_sorted(t_node *node)
{
	if (ft_nodesize(node) == 0 || ft_nodesize(node) == 1)
		return ;
	if (ft_nodesize(node) == 2)
	{
		if (node->content < node->next->content)
			exit_with_ok();
	}
	else
	{
		while (node->next)
		{
			if (node->content > node->next->content)
				return ;
			node = node->next;
		}
		exit_with_ok();
	}
	exit_with_ko();
}

static void	sort_by_operations(t_data *data, char *sort_operations)
{
	if (!ft_strncmp(sort_operations, "sa\n", 4))
		sa(data);
	else if (!ft_strncmp(sort_operations, "sb\n", 4))
		sb(data);
	else if (!ft_strncmp(sort_operations, "ss\n", 4))
		ss(data);
	else if (!ft_strncmp(sort_operations, "pa\n", 4))
		pa(data);
	else if (!ft_strncmp(sort_operations, "pb\n", 4))
		pb(data);
	else if (!ft_strncmp(sort_operations, "ra\n", 4))
		ra(data);
	else if (!ft_strncmp(sort_operations, "rb\n", 4))
		rb(data);
	else if (!ft_strncmp(sort_operations, "rr\n", 4))
		rr(data);
	else if (!ft_strncmp(sort_operations, "rra\n", 4))
		rra(data);
	else if (!ft_strncmp(sort_operations, "rrb\n", 4))
		rrb(data);
	else if (!ft_strncmp(sort_operations, "rrr\n", 4))
		rrr(data);
	else
		exit_with_error();
}

void	exec_operations(t_data *data)
{
	char	*sort_operations;

	sort_operations = get_next_line(STDIN_FILENO);
	while (sort_operations)
	{
		sort_by_operations(data, sort_operations);
		free(sort_operations);
		sort_operations = get_next_line(STDIN_FILENO);
	}
}
