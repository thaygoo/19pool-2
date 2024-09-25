/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:30:46 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/25 19:19:49 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	check_lenx(int i, char *map)
{
	int	count;
	int	lenx;

	lenx = 0;
	while (map[++i] != '\n')
		lenx++;
	count = 0;
	i++;
	if (map[i] == '\0')
		return (lenx);
	while (map[i + 1] != '\0')
	{
		if ((map[i] != '\n') && (map[i] != '\0'))
			count++;
		else
		{
			if (count != lenx)
				return (0);
			count = 0;
		}
		i++;
	}
	if (count != lenx)
		return (0);
	return (lenx);
}

int	check_leny(int i, char *map, t_params *param)
{
	int	count;

	count = 0;
	while (map[++i] != '\0')
	{
		if (map[i] == '\n')
			count++;
	}
	if (count != param->leny)
		return (0);
	return (1);
}

int	check_char(int i, char *map, t_params *param)
{
	while (map[++i] != '\0')
	{
		if ((map[i] != param->cempty) && (map[i] != param->cobstacle)
			&& (map[i] != '\n'))
			return (0);
	}
	return (1);
}

int	check_map(char *map, t_params *param)
{
	int	i;

	i = 0;
	while (map[i] != '\n')
		i++;
	if (check_leny(i, map, param) == 0 || check_char(i, map, param) == 0
		|| check_lenx(i, map) == 0)
		return (0);
	param->lenx = check_lenx(i, map);
	return (1);
}
