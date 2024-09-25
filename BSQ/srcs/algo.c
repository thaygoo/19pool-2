/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:58:44 by huburton          #+#    #+#             */
/*   Updated: 2024/09/25 16:46:46 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

t_map	*create_matrix1(int rows, int cols, t_map *new_map)
{
	int	i;
	int	j;

	i = -1;
	while (++i < rows)
	{
		new_map->map[i] = malloc(cols * sizeof(int));
		new_map->algo[i] = malloc(cols * sizeof(int));
		if (new_map->map[i] == NULL || new_map->algo[i] == NULL)
		{
			ft_puterr("map error\n");
			j = -1;
			while (++j < i)
			{
				free(new_map->map[j]);
				free(new_map->algo[j]);
			}
			free(new_map->map);
			free(new_map->algo);
			free(new_map);
			return (NULL);
		}
	}
	return (new_map);
}

t_map	*create_matrix(int rows, int cols)
{
	t_map	*new_map;

	new_map = malloc(sizeof(t_map));
	if (new_map == NULL)
		return (NULL);
	new_map->map = malloc(rows * sizeof(int *));
	new_map->algo = malloc(rows * sizeof(int *));
	if (new_map->map == NULL || new_map->algo == NULL)
	{
		ft_puterr("map error\n");
		free(new_map);
		return (NULL);
	}
	new_map = create_matrix1(rows, cols, new_map);
	if (!new_map)
		return (NULL);
	return (new_map);
}

void	free_matrix(struct map *map, int rows)
{
	int	i;

	i = -1;
	while (++i < rows)
	{
		free(map->map[i]);
		free(map->algo[i]);
	}
	free(map->map);
	free(map->algo);
	free(map);
}

void	find_square(t_map *algo, t_square *square, t_params *param)
{
	int	i;
	int	j;

	square->size = 0;
	i = -1;
	while (++i < param->leny)
	{
		j = -1;
		while (++j < param->lenx)
		{
			if (algo->algo[i][j] > square->size)
			{
				square->size = algo->algo[i][j];
				square->x = i;
				square->y = j;
			}
		}
	}
}

void	algo(char *map, t_params *param)
{
	t_square	*square;
	t_map		*new_map;

	new_map = create_matrix(param->leny, param->lenx);
	fill_matrix(new_map, param, map);
	find_square(new_map, square, param);
	display(new_map, square, param);
	free_matrix(new_map, param->leny);
}
