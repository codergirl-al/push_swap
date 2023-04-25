/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:31:45 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/25 20:53:25 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <limits.h>

// Stack
typedef struct s_struct
{
	int				value;
	int				index;
	struct s_struct	*next;
}				t_struct;

void	swap(t_struct **stack);
void	double_swap(t_struct **a, t_struct **b); 
void	push(t_struct **src, t_struct **dest);
void	rotate(t_struct **stack);
void	double_rotate(t_struct **a, t_struct **b);
void	reverse_rotate(t_struct **stack);
void	double_reverse_rotate(t_struct **a, t_struct **b);

// utils
void	ft_print_error();
void	ft_free_stack(t_struct **s);
void	ft_free_arguments(char **s);
void	ft_print_list(t_struct *head);
void	validate_args(int argc, char **argv);
void	init_stack(t_struct **a, int argc, char **argv);
int		ft_is_sorted(t_struct **s);

// struct creation functions
t_struct	*ft_struct_new(int value);
void		ft_struct_add_back(t_struct **lst, t_struct *new_node);
t_struct	*ft_struct_last(t_struct *str);

#endif
