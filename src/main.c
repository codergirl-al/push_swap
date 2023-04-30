/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:09:14 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/29 23:04:50 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	ft_sort_control(t_struct **a, t_struct **b)
{
	if (ft_stack_size(*a) <= 5)
		simple_sort(a, b);
	else
		radix_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_struct	**a;
	t_struct	**b;

	if (argc < 2)
		return (-1);
	validate_args(argc, argv);
	a = (t_struct **)malloc(sizeof(t_struct));
	b = (t_struct **)malloc(sizeof(t_struct));
	*a = NULL;
	*b = NULL;
	init_stack(a, argc, argv);
	if (ft_is_sorted(a))
	{
		ft_free_stack(a);
		ft_free_stack(b);
		return (0);
	}
	ft_sort_control(a, b);
	ft_printf("We're done here\n");
	ft_free_stack(a);
	ft_free_stack(b);
	return (0);
}
