/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 21:10:33 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	rra(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	ft_nodeadd_front(&data->stack_a.head,
		ft_nodenew(ft_nodelast(data->stack_a.head)->content));
	del_end_node(&data->stack_a.head);
	ft_printf("rra\n");
}
