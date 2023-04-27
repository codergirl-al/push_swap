/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:09:14 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/26 17:39:46 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_sort_control(t_struct **a, t_struct **b, char **str)
{
	if (ft_is_sorted(a))
	{
		ft_free_stack(a);
		ft_free_stack(b);
		return (0);
	}
	if (ft_stack_size(*a) <= 5)
		simple_sort(a, b);
	else
		// three_chunk_sort(a, b);
		ft_printf("hloow");
	ft_sort_control(a, b, str);
	return (1);
}

int	main(int argc, char **argv)
{
	t_struct	**a;
	t_struct	**b;
	char		*str;

	if (argc < 2)
		return (-1);
	validate_args(argc, argv);
	a = (t_struct **)malloc(sizeof(t_struct));
	b = (t_struct **)malloc(sizeof(t_struct));
    *a = NULL;
    *b = NULL;
	init_stack(a, argc, argv);
	str = NULL;
	ft_sort_control(a, b, &str);
	return (0);
}
