/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 20:42:36 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

static void	copy_beginning_of_a_to_b(t_data *data)
{
	ft_nodeadd_front(&data->stack_b.head,
		ft_nodenew(data->stack_a.head->content));
}

void	pb(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) == 0)
		return ;
	copy_beginning_of_a_to_b(data);
	del_beginning_node(&data->stack_a.head);
	ft_printf("pb\n");
}
