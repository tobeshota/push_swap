/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 22:49:48 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/free_data.h"

void free_data(t_data *data)
{
	ft_nodeclear(data->stack_a.head);
	ft_nodeclear(data->stack_b.head);
}
