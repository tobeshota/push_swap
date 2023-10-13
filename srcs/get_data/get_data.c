/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toshota <toshota@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:24:49 by toshota           #+#    #+#             */
/*   Updated: 2023/10/13 23:34:44 by toshota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_data.h"

t_stack	*get_data_from_argv(char **argv, t_data *data)
{
	t_stack	*stack;
	int		arg_i;
	int		nb;

	arg_i = 1;
	while (argv[arg_i])
	{
		nb = ft_atoi(argv[arg_i]);
		ft_printf("[%d]\n", nb);
		if (arg_i == 1)
			stack->head = ft_lstnew(&nb);
		else
			ft_lstadd_back(&stack->head, ft_lstnew(&nb));
		check_malloc(stack->head);
		ft_printf("> %d\n", *(int *)stack->head->content);
		arg_i++;
	}
	return stack;
}

void	put_data(t_data *data)
{
	while (data->stack_a.head)
	{
		ft_printf(">> %d\n", *(int *)data->stack_a.head->content);
		data->stack_a.head = data->stack_a.head->next;
	}
}

void	get_data(int argc, char **argv, t_data *data)
{
	// 個々のコマンドライン引数に格納されているint型整数値をリストに格納する
	data->stack_a = *get_data_from_argv(argv, data);
put_data(data);
	// check_is_data_unique(data);
}
