/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/21 00:46:26 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

static void	sa_content(t_data *data)
{
	int	tmp;

	tmp = data->stack_a.head->content;
	data->stack_a.head->content = data->stack_a.head->next->content;
	data->stack_a.head->next->content = tmp;
}

static void	sa_order(t_data *data)
{
	int	tmp;

	tmp = data->stack_a.head->order;
	data->stack_a.head->order = data->stack_a.head->next->order;
	data->stack_a.head->next->order = tmp;
}

void	sa(t_data *data)
{
	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	sa_content(data);
	sa_order(data);
	ft_printf("sa\n");
}
