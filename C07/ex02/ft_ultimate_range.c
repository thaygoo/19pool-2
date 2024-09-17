/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:53:07 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 18:27:52 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/** 
#include <stdio.h>

int	main(void)
{
	int	i;
	int	**test;

	ft_ultimate_range(test, 10, 20);
	i = 0;
	while (i < 10)
	{
		printf("%i \n", (*test)[i]);
		i++;
	}
	return (0);
}
**/