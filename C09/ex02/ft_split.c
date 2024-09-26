/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:48:00 by hburton           #+#    #+#             */
/*   Updated: 2024/09/26 13:35:48 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ischarset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_ischarset(str[i], charset))
		{
			count++;
			while (!ft_ischarset(str[i], charset) && str[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = ft_strlen(str);
	dup = malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	while (str[i] && !ft_ischarset(str[i], charset))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = ft_count(str, charset);
	split = malloc(sizeof(char *) * count + 1);
	if (!split)
		return (NULL);
	while (str[i])
	{
		if (!ft_ischarset(str[i], charset))
		{
			split[j] = ft_strdup(&str[i], charset);
			j++;
			while (!ft_ischarset(str[i], charset) && str[i])
				i++;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main() {
	char *str = "Hello, world! This is a test string.";
	char *charset = " ,";
	char **split = ft_split(str, charset);

	if (split == NULL) {
		printf("Error: ft_split returned NULL\n");
		return 1;
	}

    printf("Split strings:\n");
    for (int i = 0; split[i] != NULL; i++) {
        printf("%s\n", split[i]);
    }

    for (int i = 0; split[i] != NULL; i++) {
        free(split[i]);
    }
    free(split);

    return 0;
} */
