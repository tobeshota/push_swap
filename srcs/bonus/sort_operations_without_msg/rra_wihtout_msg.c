/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_wihtout_msg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 08:21:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/checker.h"

void	rra_without_msg(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	add_last_node_to_first_node(&data->stack_a.head);
	del_end_node(&data->stack_a.head);
}
