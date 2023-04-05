/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:31:45 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/05 17:56:13 by apeposhi         ###   ########.fr       */
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

void	swap(t_struct **stack);
void	double_swap(t_struct **a, t_struct **b); 
void	push(t_struct **src, t_struct **dest);
void	rotate(t_struct **stack);
void	double_rotate(t_struct **a, t_struct **b);
void	reverse_rotate(t_struct **stack);
void	double_reverse_rotate(t_struct **a, t_struct **b);

#endif
