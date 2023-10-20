/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodenext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:47:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 14:00:18 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/utils.h"

void	ft_nodenext(t_node **node)
{
	if (node == NULL || *node == NULL)
		return ;
	if (*node != NULL)
		*node = (*node)->next;
}
