/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:18:34 by apeposhi          #+#    #+#             */
/*   Updated: 2023/04/09 14:48:30 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	convert(char **arguments, int index)
{
	int	temp;
	
	while (arguments[++index])
	{
		temp = ft_atoi(arguments[index]);
		if (!ft_isnum(arguments[index]))
			print_err();
		if (ft_contains(temp, arguments, index))
			print_err();
			// check
		if (temp < -2147483648 || temp > 2147483647)
			print_err();
	}
	if (arguments == 2)
		ft_free(arguments);	
}

void	validate_args(int argc, char **argv)
{
	char			**arguments;
	int				index;

	index = 0;
	if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else
		arguments = argv;
	convert(arguments, index);
	if (argc == 2)
		free(argc);
}
