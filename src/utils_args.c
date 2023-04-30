/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:18:34 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/30 12:15:21 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_is_valid_number(char *n)
{
	if (*n == '-')
		n++;
	if (!*n)
		return (0);
	while (*n)
	{
		if (!ft_isdigit(*n))
			return (0);
		n++;
	}
	return (1);
}

static int	ft_check_duplicate_number(int n, char **argv, int index)
{
	while (argv[++index])
		if (ft_atoi(argv[index]) == n)
			return (1);
	return (0);
}

static void	ft_convert_arguments(char **arguments, int index)
{
	int	temp;

	while (arguments[++index])
	{
		temp = ft_atoi(arguments[index]);
		if (!ft_is_valid_number(arguments[index]))
			ft_print_error();
		if (ft_check_duplicate_number(temp, arguments, index))
			ft_print_error();
		if (temp < INT_MIN || temp > INT_MAX)
			ft_print_error();
	}
}

void	validate_args(int argc, char **argv)
{
	char	**arguments;
	int		index;

	index = 0;
	if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else
		arguments = argv;
	ft_convert_arguments(arguments, index);
	if (argc == 2)
		ft_free_arguments(arguments);
}
