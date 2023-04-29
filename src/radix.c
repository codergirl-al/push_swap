/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:30:07 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/29 16:29:27 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int get_max_bits(t_struct **s) {
	int max;
	int bits;

	max = (*s)->index;
    bits = 0;
    while ((*s))
	{
        if ((*s)->index > max)
            max = (*s)->index;
        (*s) = (*s)->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void radix_sort(t_struct **a, t_struct **b)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = ft_stack_size(*a);
	while (i < get_max_bits(a)) {
		j = 0;
		size = ft_stack_size(*a);
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				rotate(a, "a");
			else
    	    	push(a, b, "b");
			j++;
		}
		while (ft_stack_size(*b) != 0)
			push(b, a, "a");
		i++;
	}
}
