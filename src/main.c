/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:29:42 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/03 18:36:47 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/push_swap.h"

void print_list(t_struct *head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

int main() {
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

    printf("Original list: ");
    print_list(head);

    reverse_rotate(&head);

    printf("List after moving last element to front: ");
    print_list(head);

    return 0;
}