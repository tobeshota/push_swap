/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:00:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/12 20:35:45 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# include "../libft/libft.h"

typedef struct s_stack
{
	t_list	*head;
	//	要素数．データ全体を分割するときや，最後のノードはどこかを参照するときに使う
	int		size;
}			t_stack;

typedef struct s_data
{
	t_stack	stack_a;
	t_stack	stack_b;
}			t_data;

#endif