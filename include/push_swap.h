/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:31:45 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 12:36:38 by apeposhi         ###   ########.fr       */
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

// instructions
int		swap(t_struct **stack, char *s);
int		double_swap(t_struct **a, t_struct **b); 
int		push(t_struct **src, t_struct **dest, char *s);
int		rotate(t_struct **stack, char *s);
int		double_rotate(t_struct **a, t_struct **b);
int 	reverse_rotate(t_struct **stack, char *s);
int		double_reverse_rotate(t_struct **a, t_struct **b);
void	ft_print_operation(char *operation, char *stack);

// utils
void	ft_print_error();
void	ft_free_stack(t_struct **s);
void	ft_free_arguments(char **s);
void	validate_args(int argc, char **argv);
void	init_stack(t_struct **a, int argc, char **argv);
int		ft_is_sorted(t_struct **s);
int		ft_stack_size(t_struct *stack);
int		get_distance(t_struct **s, int i);

// struct creation functions
t_struct	*ft_struct_new(int value);
void		ft_struct_add_back(t_struct **lst, t_struct *new_node);
t_struct	*ft_struct_last(t_struct *str);

// sorting algorithms
void	simple_sort(t_struct **a, t_struct **b);
void 	radix_sort(t_struct **a, t_struct **b);

#endif
 