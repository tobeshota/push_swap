/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 22:50:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

t_node	*get_node(char **content)
{
	t_node	*current;
	int		arg_i;

	arg_i = 1;
	if (content == NULL)
		return (NULL);
	while (content[arg_i])
	{
		if (arg_i == 1)
			current = ft_nodenew(ft_atoi(content[arg_i]));
		else
			ft_nodeadd_back(&current, ft_nodenew(ft_atoi(content[arg_i])));
		check_malloc(current);
		arg_i++;
	}
	return (current);
}

void	check_is_node_unique(t_node *node)
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
	return (stack);
}
