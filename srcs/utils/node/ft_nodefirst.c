/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodefirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:47:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 15:46:12 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void	ft_nodefirst(t_node **node)
{
	if (node == NULL || *node == NULL)
		return ;
	while ((*node)->prev != NULL)
		*node = (*node)->prev;
}
