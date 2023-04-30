/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:30:07 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 06:06:19 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int get_max_bits(t_struct **stack)
{
  t_struct *head;
  int max;
  int max_bits;

  head = *stack;
  max = head->index;
  max_bits = 0;
  while (head) {
    if (head->index > max)
      max = head->index;
    head = head->next;
  }
  while ((max >> max_bits) != 0)
    max_bits++;
  return (max_bits);
}

void radix_sort(t_struct **a, t_struct **b)
{
  t_struct *head_a;
  int i;
  int j;
  int size;
  int max_bits;

  i = 0;
  head_a = *a;
  size = ft_stack_size(head_a);
  max_bits = get_max_bits(a);
  ft_printf("Deez nuts max bits = %d\n", max_bits);
  while (i < max_bits)
  {
	j = 0;
	while (j++ < size)
	{
	  head_a = *a;
	  if (((head_a->index >> i) & 1) == 1)
		rotate(a, "a");
	  else
		push(a, b, "b");
	}
	while (ft_stack_size(*b) != 0)
	  push(b, a, "a");
	i++;
  }
}
