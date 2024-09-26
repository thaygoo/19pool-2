/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:42:37 by huburton          #+#    #+#             */
/*   Updated: 2024/09/26 18:44:54 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc_sorted;
	int	des_sorted;

	i = 0;
	asc_sorted = 0;
	des_sorted = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			asc_sorted = 1;
		else if (f(tab[i], tab[i + 1]) > 0)
			des_sorted = 1;
		i++;
	}
	if (asc_sorted && des_sorted)
		return (0);
	return (1);
}
