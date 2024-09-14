/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:38:36 by huburton          #+#    #+#             */
/*   Updated: 2024/09/12 13:11:18 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	if (str[0] == 0)
		return (1);
	while (str[++i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
	}
	return (1);
}

/* int main(void)
{
	char str[8] = "bgvdgvb";

	printf("%d\n", ft_str_is_printable(str));
	return 0;
} */
