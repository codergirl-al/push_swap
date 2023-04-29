/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:22:50 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/29 16:51:03 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_struct *ft_get_min_value(t_struct **s) {
  t_struct *head;
  t_struct *min;
  int has_min;

  min = NULL;
  has_min = 0;
  head = *s;
  if (head) {
    while (head) {
      if ((head->index == -1) && (!has_min || head->value < min->value)) {
        min = head;
        has_min = 1;
      }
      head = head->next;
    }
  }
  return (min);
}


void ft_give_indexes_to_stack(t_struct **s)
{
    t_struct    *head;
    int         index;

    index = 0;
    while (ft_get_min_value(s) != NULL)
    {
        head = ft_get_min_value(s);
        head->index = index;
        index++;
    }
}

void init_stack(t_struct **a, int argc, char **argv)
{
    t_struct *new;
    char **args;
    int i;

    i = 0;
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else {
        i = 1;
        args = argv;
    }
    while (args[i])
    {
        new = ft_struct_new(ft_atoi(args[i]));
        ft_struct_add_back(a, new);
        i++;
    }
    ft_give_indexes_to_stack(a);
    if (argc == 2)
        ft_free_arguments(args);
}
