/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:50:41 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/11 17:15:42 by apeposhi         ###   ########.fr       */
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
	int	index;

	index = ft_strlen(s);
	while (--index  >= 0)
		free(s[index]);
}

void	ft_print_list(t_struct *head) {
    while (head != NULL) {
        ft_printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}
