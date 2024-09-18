/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:53:12 by huburton          #+#    #+#             */
/*   Updated: 2024/09/17 14:53:16 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	res;
	int	base_len;

	sign = 1;
	i = 0;
	res = 0;
	base_len = ft_strlen(base);
    // Vérification de la base (à compléter)

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_strchr(base, str[i]))
	{
		res = res * base_len + (str[i] - base[0]);
		i++;
	}
	return (res * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		nb;
	int		base_to_len;
	char	*result;
    // Vérification des bases (à compléter)
	nb = ft_atoi_base(nbr, base_from);
	base_to_len = ft_strlen(base_to);
    // Allocation de mémoire
	result = malloc(33);
	if (!result)
		return (NULL);
    // Conversion du nombre en nouvelle base
	i = 32;
	result[i--] = '\0';
	if (nb == 0)
		result[i--] = base_to[0];
	else
	{
		if (nb < 0)
		{
			result[i--] = '-';
			nb = -nb;
		}
		while (nb)
		{
			result[i--] = base_to[nb % base_to_len];
			nb /= base_to_len;
		}
	}
	return (result + i + 1);
}
