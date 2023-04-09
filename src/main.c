/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:09:14 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/09 15:04:03 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_struct	**a = NULL;
	t_struct	**b = NULL;

	if (argc < 2)
		return (-1);
	validate_args(argc, argv);
	initialize_stacks(a, b);
	return (0);
}
