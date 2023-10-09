/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:43:42 by toshota           #+#    #+#             */
/*   Updated: 2023/10/09 17:40:43 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	t_node			*tail;
	int				size;	//	要素数．ソート時に全体を何分割するのか
	// int				max;	//	必要不可欠でない．いちばん下に来る要素．
}					t_stack;

typedef struct s_data
{
	t_stack			stack_a;
	t_stack			stack_b;
}					t_data;


/*

1．libftの双方好循環リスト版をつくる．
2．libftの双方好循環リスト版をもとに，ソートするルールをつくる

*/

t_data data;
list(data);

data-> a.head->content = 10;
data-> a.head->next = *new;

addback(t_data data, (int a or argv))
{
	t_node new;
	t_node tail;

	whie (argv)
	{
		if (data->stack_a.head==NULL)
		{
			new = listnew(argv[i]);
			data->stack_a.head = new;
			tail = data->stack_a.head;
			data->stack_a.head->next=new;
			data->stack_a.head->prev=tail;
		}
		else
		{
			new = listnew(argv[i]);
			tail = listlast(data->stack_a.head);
			tail-next=new
			new->prev=tail
			new->next=__head
			data->stack_a.head->prev=new;

		}
		current = data->stack_a.head
	}

}
