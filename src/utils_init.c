/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:22:50 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/25 18:39:30 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_struct *ft_get_min_value(t_struct **s)
{
    t_struct    *head;
    t_struct    *min;
    
    head = *s;
    while (head != NULL)
    {
        if (head->index == -1 && (min == NULL || head->value < min->value))
            min = head;
        head = head->next;
    }
    return min;
}

void ft_give_indexes_to_stack(t_struct **s)
{
    t_struct    *head;
    int         index;

    index = 0;
    while (ft_get_min_value(s) != NULL)
    {
        head = ft_get_min_value(s);
        head->index = ++index;
    }
}

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
    ft_give_indexes_to_stack(a);
    if (argc == 2)
        ft_free_arguments(arguments);
}
