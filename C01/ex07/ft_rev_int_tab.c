/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:38:09 by huburton          #+#    #+#             */
/*   Updated: 2024/09/08 18:19:22 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/* int	main(void)
{
	int	nbr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(nbr) / sizeof(nbr[0]);

	ft_rev_int_tab(nbr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", nbr[i]);
	}
	printf("\n");
	return(0);
} */