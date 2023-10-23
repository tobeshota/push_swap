/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_for_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:19:38 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 13:24:35 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker.h"

static t_node	*get_node(char **argv)
{
	t_node	*node;
	t_node	*new;
	int		arg_i;

	arg_i = 1;
	if (argv == NULL)
		return (NULL);
	while (argv[arg_i])
	{
		new = ft_nodenew(ft_atoi(argv[arg_i]));
		check_malloc(new);
		if (arg_i == 1)
			node = new;
		else
			ft_nodeadd_back(&node, new);
		arg_i++;
	}
	return (node);
}

static void	check_is_node_unique(t_node *node)
{
	int		target;
	t_node	*current;

	current = node;
	while (current)
	{
		target = node->content;
		while (node->next)
		{
			node = node->next;
			if (target == node->content)
				exit_with_error();
		}
		current = current->next;
		node = current;
	}
}

static void	get_order(t_node *node)
{
	t_node	*test;

	test = node;
	while (node)
	{
		node->order = 1;
		while (test->next)
		{
			if (node->content > test->content)
				node->order++;
			ft_nodenext(&test);
		}
		if (node->content > test->content)
			node->order++;
		ft_nodenext(&node);
		ft_nodefirst(&test);
	}
}

static t_stack	get_stack_for_checker(char **argv)
{
	t_stack	stack;

	stack.head = get_node(argv);
	stack.size = ft_nodesize(stack.head);
	check_is_node_unique(stack.head);
	get_order(stack.head);
	return (stack);
}

t_data	get_data_for_checker(char **argv)
{
	t_data	data;

	data.stack_a = get_stack_for_checker(argv);
	data.stack_b = get_stack_for_checker(NULL);
	return (data);
}
