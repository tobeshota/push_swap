/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_data.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:43:42 by toshota           #+#    #+#             */
/*   Updated: 2023/10/10 17:20:31 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_DATA_H
# define SORT_DATA_H

#include "define.h"

void	sort_data(t_data *data);

// sort_operations
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

#endif

/*

libftのbonusパートで作成した関数をもとに12個のルールをつくる

*/

// t_data data;
// list(data);

// data-> a.head->content = 10;
// data-> a.head->next = *new;

// addback(t_data data, (int a or argv))
// {
// 	t_node new;
// 	t_node tail;

// 	whie (argv)
// 	{
// 		if (data->stack_a.head==NULL)
// 		{
// 			new = listnew(argv[i]);
// 			data->stack_a.head = new;
// 			tail = data->stack_a.head;
// 			data->stack_a.head->next=new;
// 			data->stack_a.head->prev=tail;
// 		}
// 		else
// 		{
// 			new = listnew(argv[i]);
// 			tail = listlast(data->stack_a.head);
// 			tail-next=new
// 			new->prev=tail
// 			new->next=__head
// 			data->stack_a.head->prev=new;

// 		}
// 		current = data->stack_a.head
// 	}

// }
