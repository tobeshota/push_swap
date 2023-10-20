/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 15:16:52 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

t_data	get_data(char **argv)
{
	t_data	data;

	data.stack_a = get_stack(argv);
	data.stack_b = get_stack(NULL);
	return (data);
}
