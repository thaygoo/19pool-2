/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:38:45 by huburton          #+#    #+#             */
/*   Updated: 2024/09/11 14:43:51 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_alpha(char c)
{
	if (ft_isuppercase(c) || ft_islowercase(c))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_isuppercase(str[i]))
			str[i] += 32;
	}
	if (ft_islowercase(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!ft_isnumber(str[i - 1]) && !ft_is_alpha(str[i - 1])
			&& ft_islowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/* int main(void)
{
	char str[62] = "salut, comment tu vas ? 
		42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
} */
