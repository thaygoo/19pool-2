/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:53:23 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/25 16:22:05 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_strjoin(int size, char *str1, char *str2)
{
	char	*res;
	int		i;
	int		count;

	count = ft_strlen(str1) + ft_strlen(str2);
	i = 0;
	if (size <= 0)
	{
		res = malloc(sizeof(char));
		return (res);
	}
	res = malloc((count + 1) * sizeof(char));
	if (res == 0)
		return (0);
	res[0] = '\0';
	ft_strcat(res, str1);
	ft_strcat(res, str2);
	free(str1);
	return (res);
}

int	min3(int a, int b, int c)
{
	int	min_value;

	min_value = a;
	if (b < min_value)
		min_value = b;
	if (c < min_value)
		min_value = c;
	return (min_value);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	value = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (value * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
