/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 23:56:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/sort_data.h"

void	sort_data(t_data *data)
{
	if (data->stack_a.size <= 6)
		sort_under_6_nodes(data);
	else
		radix_sort(data);
}
