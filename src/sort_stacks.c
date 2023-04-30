/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:51:32 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 06:36:38 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int get_min(t_struct **stack, int val) {
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

static void sort_3(t_struct **a)
{
  t_struct *head;
  int min;
  int next_min;

  head = *a;
  min = get_min(a, -1);
  next_min = get_min(a, min);
  if (ft_is_sorted(a))
    return;
  if (head->index == min && head->next->index != next_min)
  {
    ft_printf("deez nuts %d\n", min);
    rotate(a, "a");
    swap(a, "a");
    reverse_rotate(a, "a");
  }
  else if (head->index == next_min)
  {
    if (head->next->index == min)
      swap(a, "a");
    else
      reverse_rotate(a, "a");
  }
  else
  {
    if (head->next->index == min)
      rotate(a, "a");
    else
	{
      swap(a, "a");
      reverse_rotate(a, "a");
    } 
  }
}

static void sort_4(t_struct **a, t_struct **b) {
	int distance;

	if (ft_is_sorted(a))
		return;
	distance = get_distance(a, get_min(a, -1));
	if (distance == 1)
		rotate(a, "a");
	else if (distance == 2)
		rotate(a, "a");
	else if (distance == 3)
		reverse_rotate(a, "a");
	if (ft_is_sorted(a))
		return;
	push(a, b, "b");
	sort_3(a);
	push(b, a, "a");
}

void sort_5(t_struct **a, t_struct **b) {
	int distance;

	distance = get_distance(a, get_min(a, -1));
	if (distance == 1)
		rotate(a, "a");
	else if (distance == 2)
	{
		rotate(a, "a");
		rotate(a, "a");
	}
	else if (distance == 3)
		reverse_rotate(a, "a"), reverse_rotate(a, "a");
	else if (distance == 4)
		reverse_rotate(a, "a");
	if (ft_is_sorted(a))
		return;
	push(a, b,"a");
	sort_4(a, b);
	push(a, b, "a");
}

void simple_sort(t_struct **a, t_struct **b)
{
	int size;

	if (ft_is_sorted(a) || ft_stack_size(*a) == 0 ||
			ft_stack_size(*a) == 1)
		return;
	size = ft_stack_size(*a);
	ft_printf("the stack size from simple sort function: %d\n", ft_stack_size(*a));
	if (size == 2)
		swap(a, "a");
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
}
