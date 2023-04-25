/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:09:14 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/26 00:31:09 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_sort_control(t_struct **a, t_struct **b)
{
	if (ft_is_sorted(a))
	{
		ft_free_stack(a);
		ft_free_stack(b);
		return (0);
	}
	if (ft_stack_size(a) <= 5)
		//sorting_alg_simple
	// else
		//sorting_alg_RADIX
	ft_sort_control(a, b);
	return (0);
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
	ft_sort_control(a, b);
	return (0);
}
