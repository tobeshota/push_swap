/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:31:24 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 12:58:31 by toshota          ###   ########.fr       */
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

void	check_is_data_sorted(t_data *data)
{
	if (ft_nodesize(data->stack_b.head) != 0)
		exit_with_ko();
	while (data->stack_a.head->next)
	{
		if (data->stack_a.head->content > data->stack_a.head->next->content)
			exit_with_ko();
		data->stack_a.head = data->stack_a.head->next;
	}
	exit_with_ok();
}

static void	sort_by_operations(t_data *data, char *sort_operations)
{
	if (!ft_strncmp(sort_operations, "sa\n", 4))
		sa_without_msg(data);
	else if (!ft_strncmp(sort_operations, "sb\n", 4))
		sb_without_msg(data);
	else if (!ft_strncmp(sort_operations, "ss\n", 4))
		ss_without_msg(data);
	else if (!ft_strncmp(sort_operations, "pa\n", 4))
		pa_without_msg(data);
	else if (!ft_strncmp(sort_operations, "pb\n", 4))
		pb_without_msg(data);
	else if (!ft_strncmp(sort_operations, "ra\n", 4))
		ra_without_msg(data);
	else if (!ft_strncmp(sort_operations, "rb\n", 4))
		rb_without_msg(data);
	else if (!ft_strncmp(sort_operations, "rr\n", 4))
		rr_without_msg(data);
	else if (!ft_strncmp(sort_operations, "rra\n", 4))
		rra_without_msg(data);
	else if (!ft_strncmp(sort_operations, "rrb\n", 4))
		rrb_without_msg(data);
	else if (!ft_strncmp(sort_operations, "rrr\n", 4))
		rrr_without_msg(data);
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
