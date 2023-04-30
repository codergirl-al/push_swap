/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:50:41 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 11:37:31 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_error()
{
	ft_putendl_fd("Error", 1);
	exit(0);
}

void	ft_free_stack(t_struct **s)
{
	t_struct *head;
	t_struct *temp;

	head = *s;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(s);
}

void	ft_free_arguments(char **s)
{
	char	**ptr;

	ptr = s;
	while (*ptr != NULL)
	{
		free (*ptr);
		ptr++;
	}
}

int	get_distance(t_struct **s, int i)
{
    t_struct	*head;
    int		dist;

    dist = 0;
    head = *s;
    while (head) {
        if (head->index == i)
          break;
        dist++;
        head = head->next;
    }
    return (dist);
}