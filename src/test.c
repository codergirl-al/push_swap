/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:36:11 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 08:35:06 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_list(t_struct *head)
{
  while (head != NULL) {
    ft_printf("%d ", head->value);
    head = head->next;
  }
  ft_printf("\n");
}
