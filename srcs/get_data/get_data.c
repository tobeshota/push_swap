/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 17:40:59 by toshota          ###   ########.fr       */
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

t_node	*get_node_from_argv(char **argv)
{
	t_node	*current;
	int		arg_i;

	arg_i = 1;
	while (argv[arg_i])
	{
		if (arg_i == 1)
			current = ft_nodenew(ft_atoi(argv[arg_i]));
		else
			ft_nodeadd_back(&current, ft_nodenew(ft_atoi(argv[arg_i])));
		check_malloc(current);
		arg_i++;
	}
	return (current);
}

void	put_node(t_node *current)
{
	while (current)
	{
		ft_printf(">> %d\n", current->content);
		current = current->next;
	}
}

// ノードは唯一のものであるか（重複がないか）チェックする
void check_is_node_unique(t_node *test)
{
	int target;
	t_node *current;

	current = test;
	// 一つ一つノードの要素を見ていく
	while (current)
	{
		target = test->content;
		while (test)
		{
			test = test->next;
			// ノードに重複があれば，エラー終了する．
			if (target == test->content)
				ft_printf("重複!\n");
		}
		current = current->next;
		test = current;
	}
}

t_data	get_data(int argc, char **argv)
{
	t_data	data;

	// 個々のコマンドライン引数に格納されているint型整数値をリストに格納する
	data.stack_a.head = get_node_from_argv(argv);
	data.stack_a.size = ft_nodesize(data.stack_a.head);
	data.stack_b.head = NULL;
	data.stack_b.size = ft_nodesize(data.stack_b.head);
	put_node(data.stack_a.head);
	// ノードは唯一のものであるか（重複がないか）チェックする
	check_is_node_unique(data.stack_a.head);
	return (data);
}
