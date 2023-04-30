/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:17:41 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 06:17:17 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int reverse_rotate(t_struct **stack, char *s)
{
  t_struct *last;
  t_struct *second_last;

  if (ft_stack_size(*stack) < 2)
    return (-1);
  last = *stack;
  while (last->next != NULL)
    last = last->next;
  second_last = *stack;
  while (second_last->next != last)
    second_last = second_last->next;
  last->next = *stack;
  *stack = last;
  second_last->next = NULL;
  if (s[0] != 'x')
    ft_print_operation("rr", s);
  return (0);
}

int double_reverse_rotate(t_struct **a, t_struct **b)
{
  if ((ft_stack_size(*a) < 2) || (ft_stack_size(*b) < 2))
    return (-1);
  reverse_rotate(a, "x");
  reverse_rotate(b, "x");
  ft_print_operation("rr", "r");
  return (0);
}

void	ft_print_operation(char *operation, char *stack)
{
	char	*output;

	output = ft_strjoin(operation, stack);
	ft_putendl_fd(output, 1);
}
