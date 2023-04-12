/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:29:42 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/12 12:56:07 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void print_list(t_struct *head) {
    while (head != NULL) {
        ft_printf("%d ", head->value);
        head = head->next;
    }
    ft_printf("\n");
}

int main()
{
    t_struct *a = NULL;
    a = (t_struct *) malloc(sizeof(t_struct));
    a->value = 9;
    a->next = NULL;

    t_struct *a2 = (t_struct *) malloc(sizeof(t_struct));
    a2->value = 8;
    a2->next = NULL;
    a->next = a2;

    t_struct *a3 = (t_struct *) malloc(sizeof(t_struct));
    a3->value = 7;
    a3->next = NULL;
    a2->next = a3;

    t_struct *a4 = (t_struct *) malloc(sizeof(t_struct));
    a4->value = 6;
    a4->next = NULL;
    a3->next = a4;

    // Create a sample linked list
    t_struct *head = NULL;
    head = (t_struct *) malloc(sizeof(t_struct));
    head->value = 1;
    head->next = NULL;

    t_struct *second = (t_struct *) malloc(sizeof(t_struct));
    second->value = 2;
    second->next = NULL;
    head->next = second;

    t_struct *third = (t_struct *) malloc(sizeof(t_struct));
    third->value = 3;
    third->next = NULL;
    second->next = third;

    t_struct *fourth = (t_struct *) malloc(sizeof(t_struct));
    fourth->value = 4;
    fourth->next = NULL;
    third->next = fourth;

    ft_printf("A linked list: ");
    print_list(a);

    ft_printf("B linked list: ");
    print_list(head);

    double_swap(&a, &head);

    ft_printf("Linked List after swapping: ");
    print_list(a);
    print_list(head);

    return (0);
}
