/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:27:21 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 14:35:45 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstrnewline(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		write(1, &str[i], 1);
	}
	write(1, "\n", 1);
}

void	ft_strswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_strswap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstrnewline(argv[i]);
}
