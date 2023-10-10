/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:43:42 by toshota           #+#    #+#             */
/*   Updated: 2023/10/10 16:30:49 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_OPERATIONS_H
# define SORT_OPERATIONS_H

# include "../libft/libft.h"

typedef struct s_stack
{
	t_list	*head;
	int size; //	要素数．ソート時に全体を何分割するのかや，最後のノードはどこかを参照するときに使う
}			t_stack;

typedef struct s_data
{
	t_stack	stack_a;
	t_stack	stack_b;
}			t_data;

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
