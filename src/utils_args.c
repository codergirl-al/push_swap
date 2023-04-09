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

void	convert(char **arguments, int i)
{
	int	temp;
	
	while (arguments[++i])
	{
		temp = ft_atoi(arguments[i]);
		if (!ft_isnum(arguments[i]))
			print_err();
		if (ft_contains(temp, arguments, i))
			print_err();
		if (temp < -2147483648 || temp > 2147483647)
			print_err();
	}
	if (arguments == 2)
		ft_free(arguments);	
}

void	validate_args(int argc, char **argv)
{
	char			**arguments;
	int				i;

	i = 0;
	if (argc == 2)
		arguments = ft_split(argv[1], ' ');
	else
		arguments = argv;
	convert(arguments, i);
	if (argc == 2)
		free(argc);
}
