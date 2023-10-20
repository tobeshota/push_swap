/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 21:01:05 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

static void	sb_content(t_data *data)
{
	int	tmp;

	tmp = data->stack_b.head->content;
	data->stack_b.head->content = data->stack_b.head->next->content;
	data->stack_b.head->next->content = tmp;
}

static void	sb_order(t_data *data)
{
	int	tmp;

	tmp = data->stack_b.head->order;
	data->stack_b.head->order = data->stack_b.head->next->order;
	data->stack_b.head->next->order = tmp;
}

void	sb(t_data *data)
{
	int	tmp;

	if (ft_nodesize(data->stack_b.head) < 2)
		return ;
	sb_content(data);
	sb_order(data);
	ft_printf("sa\n");
}
