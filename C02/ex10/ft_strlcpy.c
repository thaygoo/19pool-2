/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:43:12 by huburton          #+#    #+#             */
/*   Updated: 2024/09/12 18:30:45 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (i + 1 < size)
	{
		while (j < i + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (size > 0)
	{
		while (j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = 0;
	}
	return (i);
}

int	main(void)
{
	char dst[13] = "Halo  adazdk";
	char src[13] = "Hello World!";
	int i = 0;

	int n = ft_strlcpy(dst, src, 6);
	printf("dst : ");
	while (dst[i])
		printf("%c", dst[i++]);
	printf("\nsrc : ");
	while (src[i])
		printf("%c", src[i++]);	

	printf("\n%d", n);
}
