/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:22:50 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/12 13:42:57 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void init_stack(t_struct **a, int argc, char **argv)
{
    t_struct    *temp;
    char        **arguments;
    int         index;

    index = -1;
    if (argc == 2)
        arguments = ft_split(argv[1], ' ');
    else
    {
        index = 0;
        arguments = argv;
    }
    while (arguments[++index])
    {
        temp = ft_struct_new(ft_atoi(arguments[index]));
        ft_struct_add_back(a, temp);
    }
}
