/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:26:12 by huburton          #+#    #+#             */
/*   Updated: 2024/09/11 16:29:36 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[destlen + i] = src[i];
		i++;
		nb--;
	}
	dest[destlen + i] = 0;
	return (dest);
}

/** #include <string.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	char	s1[10] = "test";
	char	s2[] = "copy";

	printf("ft_ :%s \n", ft_strncat(s1, s2, 3));
	return (0);
} **/