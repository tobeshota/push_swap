/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_nodes_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:56:32 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 16:54:32 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../inc/sort_data.h"

void	sort_2_nodes_a_in_descending(t_data *data)
{
	if (data->stack_a.head->content < data->stack_a.head->next->content)
		sa(data);
}

void	sort_2_nodes_b_in_descending(t_data *data)
{
	if (data->stack_b.head->content < data->stack_b.head->next->content)
		sb(data);
}
