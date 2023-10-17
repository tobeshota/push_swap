/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 17:28:29 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

static void	copy_beginning_of_a_to_b(t_data *data)
{
	ft_nodeadd_front(&data->stack_b.head,
		ft_nodenew(data->stack_a.head->content));
}

static void	update_beginning_of_a(t_data *data)
{
	t_node	*tmp;

	tmp = data->stack_a.head;
	data->stack_a.head = data->stack_a.head->next;
	if (ft_nodesize(data->stack_a.head) > 1)
		data->stack_a.head->prev = NULL;
	ft_nodedelone(tmp);
}

void	pb(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) == 0)
		return ;
	copy_beginning_of_a_to_b(data);
	update_beginning_of_a(data);
	ft_printf("pb\n");
}
