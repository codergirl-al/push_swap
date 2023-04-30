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

int	ft_is_sorted(t_struct **s)
{
	t_struct	*head;
	int			prev;

	head = *s;
	prev = INT_MIN;
	while (s != NULL)
	{
		if (head->value < prev)
			return (0);
		prev = head->value;
		head = head->next;
	}
	return (1);
}
