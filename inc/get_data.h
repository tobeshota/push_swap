/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:30 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 17:19:52 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_DATA_H
# define GET_DATA_H

# include "define.h"
# include "utils.h"

t_data	get_data(char **argv);
t_stack	get_stack(char **argv);
void	get_order(t_node *node);

#endif
