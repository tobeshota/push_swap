/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_node_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:12:16 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 11:13:45 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

int	is_node_sorted(t_node *node)
{
	if (ft_nodesize(node) == 0 || ft_nodesize(node) == 1)
		return (TRUE);
	if (ft_nodesize(node) == 2)
	{
		if (node->content < node->next->content)
			return (TRUE);
	}
	else
	{
		while (node->next)
		{
			if (node->content > node->next->content)
				return (FALSE);
			node = node->next;
		}
		return (TRUE);
	}
	return (FALSE);
}
