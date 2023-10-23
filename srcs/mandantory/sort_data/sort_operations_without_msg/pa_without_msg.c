/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_without_msg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 09:40:45 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

static void	copy_beginning_of_b_to_a(t_data *data)
{
	t_node	*new;

	new = ft_nodenew(data->stack_b.head->content);
	check_malloc(new);
	new->order = data->stack_b.head->order;
	ft_nodeadd_front(&data->stack_a.head, new);
}

void	pa_without_msg(t_data *data)
{
	if (ft_nodesize(data->stack_b.head) == 0)
		return ;
	copy_beginning_of_b_to_a(data);
	del_beginning_node(&data->stack_b.head);
}
