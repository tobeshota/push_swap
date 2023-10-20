/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_last_node_to_first_node.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:13:38 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 23:35:43 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void	add_last_node_to_first_node(t_node **node)
{
	t_node	*new;

	new = ft_nodenew(ft_nodelast(*node)->content);
	check_malloc(new);
	new->order = ft_nodelast(*node)->order;
	ft_nodeadd_front(node, new);
}
