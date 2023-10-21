/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_without_msg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/22 08:21:22 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/checker.h"

static void	copy_beginning_of_a_to_b(t_data *data)
{
	t_node	*new;

	new = ft_nodenew(data->stack_a.head->content);
	check_malloc(new);
	new->order = data->stack_a.head->order;
	ft_nodeadd_front(&data->stack_b.head, new);
}

void	pb_without_msg(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) == 0)
		return ;
	copy_beginning_of_a_to_b(data);
	del_beginning_node(&data->stack_a.head);
}
