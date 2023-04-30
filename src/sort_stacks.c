/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:51:32 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 11:36:00 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	get_min(t_struct **stack, int val)
{
	t_struct	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

static void	sort_3(t_struct **stack_a)
{
	t_struct	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(stack_a, -1);
	next_min = get_min(stack_a, min);
	if (ft_is_sorted(stack_a))
		return ;
	if (head->index == min && head->next->index != next_min)
	{
		rotate(stack_a, "a");
		swap(stack_a, "a");
		reverse_rotate(stack_a, "a");
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			swap(stack_a, "a");
		else
			reverse_rotate(stack_a, "a");
	}
	else
	{
		if (head->next->index == min)
			rotate(stack_a, "a");
		else
		{
			swap(stack_a, "a");
			reverse_rotate(stack_a, "a");
		}
	}
}

static void	sort_4(t_struct **stack_a, t_struct **stack_b)
{
	int	distance;

	if (ft_is_sorted(stack_a))
		return ;
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		rotate(stack_a, "a");
	else if (distance == 2)
	{
		rotate(stack_a, "a");
		rotate(stack_a, "a");
	}
	else if (distance == 3)
		reverse_rotate(a, "a"), reverse_rotate(a, "a");
	else if (distance == 4)
		reverse_rotate(a, "a");
	if (ft_is_sorted(a))
		return;
	push(a, b,"b");
	sort_4(a, b);
	push(b, a, "a");
}

void	sort_5(t_struct **stack_a, t_struct **stack_b)
{
	int	distance;

	if (ft_is_sorted(a) || ft_stack_size(*a) == 0 ||
			ft_stack_size(*a) == 1)
		return;
	size = ft_stack_size(*a);
	if (size == 2)
		swap(a, "a");
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
}

void	simple_sort(t_struct **stack_a, t_struct **stack_b)
{
	int	size;

	if (ft_is_sorted(stack_a) || ft_stack_size(*stack_a) == 0
		|| ft_stack_size(*stack_a) == 1)
		return ;
	size = ft_stack_size(*stack_a);
	if (size == 2)
		swap(stack_a, "a");
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}