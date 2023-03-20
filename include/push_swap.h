/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:31:45 by apeposhi          #+#    #+#             */
/*   Updated: 2023/03/20 11:16:03 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

// Stack
typedef struct s_struct
{
	int				value;
	struct s_struct	*next;
}				t_struct;

int		swap(t_list **stack);
int		double_swap(t_list **a, t_list **b); 
int		push(t_list **src, t_list **dest);
int		rotate(t_list **stack);
int		double_rotate(t_list **a, t_list **b);
int		reverse_rotate(t_list **stack);
int		double_reverse_rotate(t_list **a, t_list **b);

#endif
