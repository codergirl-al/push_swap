/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:16:47 by apeposhi          #+#    #+#             */
/*   Updated: 2023/03/27 12:03:22 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int swap(t_struct **stack)
{
	t_struct	*temp;
	t_struct	*second;

	if (*stack == NULL || (*stack)->next == NULL)
		return (0);
	
	temp = *stack;
	second = (*stack)->next;
	// Top pointer points to the second node - which would be our new first
	*stack = second;
	// Next pointer of the new first node points to the old first node
	temp->next = second->next;
	// The new second node points to the next node
	second->next = temp;
}

int	double_swap(t_struct **a, t_struct **b)
{
	swap(&a);
	swap(&b);
}

int	push(t_struct **src, t_struct **dest)
{
	t_struct	*temp;
	t_struct	*new_src_top;
	
	if (*src == NULL)
		return (0);
	temp = *src;
	new_src_top = (*src)->next;
	temp->next = *dest;
	*dest = temp;
	*src = new_src_top;
}

int	rotate(t_struct **stack)
{
	t_struct	*temp;
	t_struct	*new_first;
	t_struct	*last;
	
	if (*stack == NULL)
		return (0);
	temp = *stack;
	new_first = (*stack)->next;
	last = 
	*stack = new_first;
	temp->next = NULL;
	last->next = temp;
}

int	double_rotate(t_struct **a, t_struct **b)
{
	rotate(a);
	rotate(b);
}

int	reverse_rotate(t_struct **stack)
{
	t_struct	first;
	t_struct	last;

	if (*stack == NULL || (*stack)->next == NULL)
		return (0);
	
	
}