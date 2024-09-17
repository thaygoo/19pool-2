/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:13:55 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 14:15:23 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		res *= nb;
		i++;
	}
	return (res);
}

/** #include <stdio.h>

int	main(void)
{
	printf("4^2 :  %d", ft_iterative_power(4, 2));
	return (0);
}
 **/