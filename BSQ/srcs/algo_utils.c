/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:48:48 by huburton          #+#    #+#             */
/*   Updated: 2024/09/25 16:45:25 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	cart_to_i(int x, int y, char *map, t_params *param)
{
	int	i;

	i = (x * (param->lenx + 1)) + y;
	if (map[i] == param->cempty)
		return (1);
	else
		return (0);
}

int	fill_algo(int x, int y, t_map *new_map)
{
	if (new_map->map[x][y] == 1)
		return (min3(new_map->algo[x][y - 1]
			, new_map->algo[x - 1][y], new_map->algo[x - 1][y - 1]) + 1);
	else
		return (0);
}

void	display(t_map *new_map, t_square *square, t_params *param)
{
	int	i;
	int	j;

	i = -1;
	while (++i < param->leny)
	{
		j = -1;
		while (++j < param->lenx)
		{
			if (new_map->algo[i][j] == 0)
				write(1, &param->cobstacle, 1);
			else if ((((square->x - square->size) < i) && (i <= square->x))
				&& (((square->y - square->size) < j) && (j <= square->y)))
				write(1, &param->cfull, 1);
			else
				write(1, &param->cempty, 1);
		}
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}

void	fill_matrix(t_map *new_map, t_params *param, char *map)
{
	int	i;
	int	j;

	i = -1;
	while (++i < param->leny)
	{
		j = -1;
		while (++j < param->lenx)
			new_map->map[i][j] = cart_to_i(i, j, map, param);
	}
	i = -1;
	while (++i < param->leny)
	{
		j = -1;
		while (++j < param->lenx)
		{
			if (j == 0 || i == 0)
				new_map->algo[i][j] = new_map->map[i][j];
			else
				new_map->algo[i][j] = fill_algo(i, j, new_map);
		}
	}
}
