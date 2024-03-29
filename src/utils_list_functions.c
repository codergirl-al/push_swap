/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:16:25 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 12:17:39 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_struct	*ft_struct_new(int value)
{
	t_struct	*new_node;

	new_node = NULL;
	new_node = (t_struct *)malloc(sizeof(t_struct));
	if (new_node)
	{
		new_node -> value = value;
		new_node -> index = -1;
		new_node -> next = NULL;
	}
	return (new_node);
}

void	ft_struct_add_back(t_struct **lst, t_struct *new_node)
{
	t_struct	*lista;

	if (lst)
	{
		if (*lst)
		{
			lista = ft_struct_last(*lst);
			lista -> next = new_node;
		}
		else
			*lst = new_node;
	}
}

t_struct	*ft_struct_last(t_struct *str)
{
	while (str)
	{
		if (!str->next)
			return (str);
		str = str->next;
	}
	return (str);
}

int	ft_stack_size(t_struct *stack)
{
	int	len;

	len = 1;
	if (!stack)
		return (0);
	while (stack->next != NULL)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}
