/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 21:22:01 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	ra(t_data *data)
{
	t_node	*new;

	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	new = ft_nodenew(data->stack_a.head->content);
	check_malloc(new);
	ft_nodeadd_back(&data->stack_a.head, new);
	del_beginning_node(&data->stack_a.head);
	ft_printf("ra\n");
}
