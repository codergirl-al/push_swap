/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:22:50 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/09 14:51:10 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	initialize_stacks(t_struct **a, t_struct **b)
{
    a = (t_struct **)malloc(sizeof(t_struct));
	b = (t_struct **)malloc(sizeof(t_struct));
    *a = NULL;
    *b = NULL;
}
