/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:31:45 by apeposhi          #+#    #+#             */
/*   Updated: 2023/03/20 13:48:07 by apeposhi         ###   ########.fr       */
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

int		swap(t_struct **stack);
int		double_swap(t_struct **a, t_struct **b); 
int		push(t_struct **src, t_struct **dest);
int		rotate(t_struct **stack);
int		double_rotate(t_struct **a, t_struct **b);
int		reverse_rotate(t_struct **stack);
int		double_reverse_rotate(t_struct **a, t_struct **b);

#endif
