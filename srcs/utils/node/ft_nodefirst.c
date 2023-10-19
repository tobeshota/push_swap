/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodefirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:47:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/19 14:19:45 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void	ft_nodefirst(t_node *node)
{
	if (node == NULL)
		return ;
	while (node != NULL)
		node = node->prev;
}
