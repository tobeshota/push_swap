/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_wihtout_msg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 08:21:28 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/checker.h"

void	rb_without_msg(t_data *data)
{
	if (ft_nodesize(data->stack_b.head) < 2)
		return ;
	add_first_node_to_last_node(&data->stack_b.head);
	del_beginning_node(&data->stack_b.head);
}
