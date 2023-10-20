/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_first_node_to_last_node.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:04:01 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 20:47:30 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void	add_first_node_to_last_node(t_node **node)
{
	t_node	*new;

	new = ft_nodenew((*node)->content);
	check_malloc(new);
	new->order = (*node)->order;
	ft_nodeadd_back(node, new);
}
