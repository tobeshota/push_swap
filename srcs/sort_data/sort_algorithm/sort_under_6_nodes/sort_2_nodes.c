/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:30:31 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:31:39 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

void	sort_2_nodes_a(t_data *data)
{
	if (data->stack_a.head->content > data->stack_a.head->next->content)
		sa(data);
}

void	sort_2_nodes_b(t_data *data)
{
	if (data->stack_b.head->content > data->stack_b.head->next->content)
		sb(data);
}
