/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:14:08 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 14:19:21 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int			i;
	long int	n;

	n = (long int)nb;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	i = 3;
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	printf("4 :  %d", ft_is_prime(4));
	printf("5 :  %d", ft_is_prime(5));
	return (0);
} */