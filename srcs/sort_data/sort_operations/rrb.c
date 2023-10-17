/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 21:44:05 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	rrb(t_data *data)
{
	t_node	*new;

	if (ft_nodesize(data->stack_b.head) < 2)
		return ;
	new = ft_nodenew(ft_nodelast(data->stack_b.head)->content);
	check_malloc(new);
	ft_nodeadd_front(&data->stack_b.head, new);
	del_end_node(&data->stack_b.head);
	ft_printf("rrb\n");
}
