/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:18:02 by huburton          #+#    #+#             */
/*   Updated: 2024/09/25 20:07:02 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	fill_struct(t_params *param, char *map)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	i = j;
	while (map[i] != '\n')
		i++;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return (0);
	i -= 1;
	param->cfull = map[i--];
	param->cobstacle = map[i--];
	param->cempty = map[i];
	param->leny = ft_atoi(ft_strncpy(dest, map, i));
	free(dest);
	if (param->leny < 1)
		return (0);
	return (1);
}

char	*rem_1st_line(char *map)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (map[i] != '\n')
		i++;
	temp = malloc(sizeof(char) * ft_strlen(map));
	if (!temp)
		return (NULL);
	while (map[i++])
		temp[j++] = map[i];
	temp[i] = '\0';
	free(map);
	return (temp);
}
