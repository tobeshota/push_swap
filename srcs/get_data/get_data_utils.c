/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/19 17:46:35 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

static t_node	*get_node(char **content)
{
	t_node	*node;
	t_node	*new;
	int		arg_i;

	arg_i = 1;
	if (content == NULL)
		return (NULL);
	while (content[arg_i])
	{
		new = ft_nodenew(ft_atoi(content[arg_i]));
		check_malloc(new);
		if (arg_i == 1)
			node = new;
		else
			ft_nodeadd_back(&node, new);
		arg_i++;
	}
	return (node);
}

static void	check_is_node_already_sorted(t_node *node)
{
	if (ft_nodesize(node) == 0 || ft_nodesize(node) == 1)
		return ;
	if (ft_nodesize(node) == 2)
	{
		if (node->content < node->next->content)
			exit(0);
	}
	else
	{
		while (node->next)
		{
			if (node->content > node->next->content)
				return ;
			node = node->next;
		}
		exit(0);
	}
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

t_stack	get_stack(char **content)
{
	t_stack	stack;

	stack.head = get_node(content);
	stack.size = ft_nodesize(stack.head);
	check_is_node_unique(stack.head);
	check_is_node_already_sorted(stack.head);
	return (stack);
}
