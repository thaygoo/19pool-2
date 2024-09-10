/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:37:05 by huburton          #+#    #+#             */
/*   Updated: 2024/09/09 15:37:52 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	if (str[0] == 0)
		return (1);
	while (str[++i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	}
	return (1);
}

/* int main(void)
{
	char str[8] = "Hfd";

	printf("%d\n", ft_str_is_uppercase(str));
	return 0;
} */
