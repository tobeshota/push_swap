/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_nodes_in_descending.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:32:37 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 12:30:17 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

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
