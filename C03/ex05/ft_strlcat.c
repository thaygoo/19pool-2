/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:59:08 by huburton          #+#    #+#             */
/*   Updated: 2024/09/12 13:32:07 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	i = 0;
	while (dest[length] && length < size)
		length++;
	while (src[i] && size && length + i < size - 1)
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < size)
		dest[length + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	s1[] = "test";
	char	s2[] = "copy";

	printf("ft_ :%d \n", ft_strlcat(s1, s2, 4));
	printf(" _ :%lu \n", strlcat(s1, s2, 4));
} */
