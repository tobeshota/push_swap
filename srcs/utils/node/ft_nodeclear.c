/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:47:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 22:46:29 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void ft_nodeclear(t_node *node)
{
	t_node *tmp;

	if (node == NULL)
		return ;
	while(node)
	{
		tmp = node->next;
		ft_nodedelone(node);
		node = tmp;
	}
}
