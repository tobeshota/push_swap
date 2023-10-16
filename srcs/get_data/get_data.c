/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 20:42:16 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

t_node	*ft_nodenew(int content)
{
	t_node	*newlst;

	newlst = (t_node *)malloc(sizeof(t_node));
	if (newlst == NULL)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	newlst->prev = NULL;
	return (newlst);
}

t_node	*ft_nodelast(t_node *node)
{
	t_node	*result;

	if (node == NULL)
		return (NULL);
	result = node;
	while (result->next != NULL)
		result = result->next;
	return (result);
}

t_node	*ft_nodefirst(t_node *node)
{
	t_node	*result;

	if (node == NULL)
		return (NULL);
	result = node;
	while (result != NULL)
		result = result->prev;
	return (result);
}

void	ft_nodeadd_back(t_node **node, t_node *new)
{
	t_node	*node_last;

	if (node == NULL || new == NULL)
		return ;
	if (*node == NULL)
	{
		*node = new;
		new->prev = *node;
		return ;
	}
	node_last = ft_nodelast(*node);
	new->prev = node_last;
	node_last->next = new;
}

int	ft_nodesize(t_node *node)
{
	int		count;
	t_node	*ptr;

	count = 0;
	ptr = node;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

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

// ノードは唯一のものであるか（重複がないか）チェックする
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

t_data	get_data(int argc, char **argv)
{
	t_data	data;

	data.stack_a = get_stack(argv);
	data.stack_b = get_stack(NULL);
put_data(data);
	return (data);
}
