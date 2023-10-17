/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 21:10:30 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	rrb(t_data *data)
{
	if (ft_nodesize(data->stack_b.head) < 2)
		return ;
	ft_nodeadd_front(&data->stack_b.head,
		ft_nodenew(ft_nodelast(data->stack_b.head)->content));
	del_end_node(&data->stack_b.head);
	ft_printf("rrb\n");
}
