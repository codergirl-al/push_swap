/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:51:32 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 22:31:08 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	handle_b(t_struct **a, t_struct **b)
{
	while (ft_stack_size(*b) != 0)
		push(b, a, "a");
}

static void	sort_3(t_struct **a, t_struct **b)
{
	int			first;
	int			second;
	int			third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if ((first > second) && (first < third) && (second < third))
		swap(a, "a");
	else if ((first > second) && (first > third) && (second > third))
	{
		swap(a, "a");
		reverse_rotate(a, "a");
	}
	else if ((first > second) && (first > third) && (second < third))
		rotate(a, "a");
	else if ((first < second) && (first < third) && (second > third))
	{
		swap(a, "a");
		rotate(a, "a");
	}
	else if ((first < second) && (first > third) && (second > third))
		reverse_rotate(a, "a");
	handle_b(a, b);
}

static void	sort_5(t_struct **a, t_struct **b)
{
	int			i;
	t_struct	*last_p;

	i = 0;
	while (ft_stack_size(*a) > 3)
	{
		last_p = ft_struct_last(*a);
		if ((*a)->index == i)
		{
			push(a, b, "b");
			i++;
		}
		else if (last_p -> index == i)
		{
			reverse_rotate(a, "a");
			last_p = ft_struct_last(*a);
			if (last_p -> index == i)
				reverse_rotate(a, "a");
			push(a, b, "b");
			i++;
		}
		else
			rotate(a, "a");
	}
	sort_3(a, b);
}

void	simple_sort(t_struct **a, t_struct **b)
{
	int	size;

	if (ft_is_sorted(a) || ft_stack_size(*a) == 0
		|| ft_stack_size(*a) == 1)
		return ;
	size = ft_stack_size(*a);
	if (size == 2)
		write(1, "sa\n", 3);
	else if (size == 3)
		sort_3(a, b);
	else if (size <= 5)
		sort_5(a, b);
}
