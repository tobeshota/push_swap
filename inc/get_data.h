/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:06:30 by toshota           #+#    #+#             */
/*   Updated: 2023/10/16 22:55:51 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_DATA_H
# define GET_DATA_H

# include "define.h"
# include "utils.h"

t_data	get_data(char **argv);
t_stack	get_stack(char **content);
void	check_is_node_unique(t_node *node);
t_node	*get_node(char **content);

#endif
