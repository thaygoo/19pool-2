/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:42:32 by huburton          #+#    #+#             */
/*   Updated: 2024/09/26 18:43:05 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*return_values;

	i = 0;
	return_values = (int *)malloc(sizeof(int) * length + sizeof(int));
	while (i < length)
	{
		return_values[i] = f(tab[i]);
		i++;
	}
	return_values[i] = 0;
	return (return_values);
}
