/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:27:17 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 14:30:45 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
