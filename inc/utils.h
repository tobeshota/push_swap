/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:07:47 by toshota           #+#    #+#             */
/*   Updated: 2023/10/17 20:41:14 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../libft/inc/libft.h"
# include "define.h"

void	all_free_tab(char **ptr);
void	exit_with_error(void);
void	check_malloc(void *ptr);
void	put_data(t_data data);

// node
t_node	*ft_nodenew(int content);
t_node	*ft_nodelast(t_node *node);
t_node	*ft_nodefirst(t_node *node);
void	ft_nodeadd_back(t_node **node, t_node *new);
int		ft_nodesize(t_node *node);
void	ft_nodeclear(t_node *node);
void	ft_nodedelone(t_node *node);
void	ft_nodeadd_front(t_node **node, t_node *new);
void	del_beginning_node(t_node **node);

#endif
