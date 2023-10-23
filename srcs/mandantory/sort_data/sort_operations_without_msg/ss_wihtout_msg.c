/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_wihtout_msg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:17:41 by toshota           #+#    #+#             */
/*   Updated: 2023/10/23 09:41:15 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_data.h"

void	ss_without_msg(t_data *data)
{
	sa_without_msg(data);
	sb_without_msg(data);
}
