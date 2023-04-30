/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:16:47 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 06:53:37 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int swap(t_struct **stack, char *s)
{
	t_struct	*temp;
	t_struct	*second;
    int 		temp_value;
    int 		temp_index;
	
	if (ft_stack_size(*stack) < 2)
		return (-1);	
	temp = *stack;
	second = temp->next;
	if (!temp && !second)
		ft_print_error();
	temp_value = temp->value;
	temp_index = temp->index;
	temp->value = second->value;
	temp->index = second->index;
	second->value = temp_value;
	second->index = temp_index;
	if (s[0] != 'x')
		ft_print_operation("s", s);
	return (0);
}

int	double_swap(t_struct **a, t_struct **b)
{
	if ((ft_stack_size(*a) < 2) || (ft_stack_size(*b) < 2))
		return (-1);
	swap(a, "x");
	swap(b, "x");
	ft_print_operation("s", "s");
	return (0);
}

int	push(t_struct **src, t_struct **dest, char *s)
{
	t_struct	*temp;
	t_struct	*head_src;
	t_struct	*head_dest;
	
	if (ft_stack_size(*src) == 0)
		return (-1);
	head_src = *src;
	head_dest = *dest;
	temp = head_src;
	head_src = head_src->next;
	*src = head_src;
	if (!head_dest)
	{
		head_dest = temp;
		head_dest->next = NULL;
		*dest = head_dest;
	}
	else
	{
		temp->next = head_dest;
		*dest = temp;
	}
	if (s[0] != 'x')
		ft_print_operation("p", s);
	return (0);
}

int	rotate(t_struct **stack, char *s)
{
    t_struct	*first;
    t_struct	*last;

    if (ft_stack_size(*stack) < 2)
            return (-1);
    first = *stack;
    last = ft_struct_last(first);
    *stack = first->next;
    first->next = NULL;
    last->next = first;
    if (s[0] != 'x')
	    ft_print_operation("r", s);
    return (0);
}

int	double_rotate(t_struct **a, t_struct **b)
{
    if ((ft_stack_size(*a) < 2) || (ft_stack_size(*b) < 2))
        return (-1);
    rotate(a, "x");
    rotate(b, "x");
    ft_print_operation("rr", "r");
    return (0);
}
