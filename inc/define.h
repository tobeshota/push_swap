/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:00:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/20 15:16:59 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# include "../libft/inc/libft.h"

typedef struct s_node
{
	int				content;
	int				order;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	int				size;
}					t_stack;

typedef struct s_data
{
	t_stack			stack_a;
	t_stack			stack_b;
}					t_data;

# define TRUE 1
# define FALSE 0

#endif
