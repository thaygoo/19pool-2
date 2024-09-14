/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:58:13 by hburton           #+#    #+#             */
/*   Updated: 2024/09/14 16:58:13 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	good_arguments(char *arg)
{
	int	i;

	if (ft_strlen(arg) != 31)
		return (0);
	i = 0;
	while (i < 31)
	{
		if (i % 2 != 0 && arg[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(arg[i] >= '1' && arg[i] <= '4'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "Error\n", 6);
	else if (good_arguments(argv[1]) == 0)
		write(1, "Error\n", 6);
	else
		write(1, "GOOD\n", 5);
	return (0);
}
