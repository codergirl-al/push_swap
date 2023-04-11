/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:09:14 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/11 12:01:43 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


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
	return (0);
}
