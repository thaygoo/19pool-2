/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:53:06 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 18:27:19 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*table;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	table = malloc((max - min) * sizeof(int));
	if (!table)
		return (NULL);
	while ((max - min) > i)
	{
		table[i] = min + i;
		i++;
	}
	return (table);
}

/**
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		printf("%d \n", ft_range(10, 20)[++i]);
	}
	return (0);
}
**/