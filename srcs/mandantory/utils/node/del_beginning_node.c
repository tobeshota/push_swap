/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_beginning_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:41:01 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 12:30:17 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	del_beginning_node(t_node **node)
{
	t_node	*tmp;

	tmp = *node;
	*node = (*node)->next;
	if (ft_nodesize(*node) > 1)
		(*node)->prev = NULL;
	ft_nodedelone(tmp);
}
