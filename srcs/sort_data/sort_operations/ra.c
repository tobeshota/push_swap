/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 20:47:36 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	ra(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	ft_nodeadd_back(&data->stack_a.head,
		ft_nodenew(data->stack_a.head->content));
	del_beginning_node(&data->stack_a.head);
	ft_printf("ra\n");
}
