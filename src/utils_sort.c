/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:41:15 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/25 18:41:16 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_is_sorted(t_struct *s)
{
	int prev;

	prev = 	INT_MIN;
	while(s != NULL)
	{
		if (s->value < prev)
			return (0);
		prev = s->value;
		s = s->next;
	}
	return (1);
}
