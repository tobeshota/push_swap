/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 15:00:26 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/sort_data.h"

void	sa(t_data *data)
{
	int	tmp;

	if (ft_nodesize(data->stack_a.head) < 2)
		return ;
	tmp = data->stack_a.head->content;
	data->stack_a.head->content = data->stack_a.head->next->content;
	data->stack_a.head->next->content = tmp;
	ft_printf("sa\n");
}
