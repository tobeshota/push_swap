/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:58:30 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 16:42:32 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void	ft_nodeadd_front(t_node **node, t_node *new)
{
	if (node == NULL || new == NULL)
		return ;
	new->next = *node;
	if (*node)
		(*node)->prev = new;
	*node = new;
}

/*
[new]──[node]

[new.prev]──[new]────────[new.next]
            [node.prev]──[node]──[node.next]


*/

// int main(void)
// {
// 	t_node *head;
// 	t_node *new;
// 	head = ft_nodenew(2);
// 	new = ft_nodenew(4);
// 	ft_nodeadd_front(&head, new);
// }
