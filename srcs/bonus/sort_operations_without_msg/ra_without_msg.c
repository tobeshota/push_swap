/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_without_msg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 08:21:26 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/checker.h"

void	ra_without_msg(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	add_first_node_to_last_node(&data->stack_a.head);
	del_beginning_node(&data->stack_a.head);
}
