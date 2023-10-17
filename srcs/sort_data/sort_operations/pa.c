/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 17:28:30 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

static void	copy_beginning_of_b_to_a(t_data *data)
{
	ft_nodeadd_front(&data->stack_a.head,
		ft_nodenew(data->stack_b.head->content));
}

static void	update_beginning_of_b(t_data *data)
{
	t_node	*tmp;

	tmp = data->stack_b.head;
	data->stack_b.head = data->stack_b.head->next;
	if (ft_nodesize(data->stack_b.head) > 1)
		data->stack_b.head->prev = NULL;
	ft_nodedelone(tmp);
}

void	pa(t_data *data)
{
	if (ft_nodesize(data->stack_b.head) == 0)
		return ;
	copy_beginning_of_b_to_a(data);
	update_beginning_of_b(data);
	ft_printf("pa\n");
}
