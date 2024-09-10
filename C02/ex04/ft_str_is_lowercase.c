/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:30:35 by huburton          #+#    #+#             */
/*   Updated: 2024/09/09 15:36:36 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	if (str[0] == 0)
		return (1);
	while (str[++i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}

/* int main(void)
{
	char str[8] = "Hfd";

	printf("%d\n", ft_str_is_lowercase(str));
	return 0;
} */
