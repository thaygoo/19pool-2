/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:17:00 by huburton          #+#    #+#             */
/*   Updated: 2024/09/11 15:23:17 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int main(void)
{
	char dst[13] = "Hello World!";
	char src[13] = "Hello World!";
	int i = 0;

	printf("%d\n", strcmp(dst, src));
	printf("%d", ft_strcmp(dst, src));
} */
