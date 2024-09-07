/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:03:48 by huburton          #+#    #+#             */
/*   Updated: 2024/09/07 16:21:14 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char left, char center, char right, int x)
{
	ft_putchar(left);
	x--;
	while (x > 1)
	{
		ft_putchar(center);
		x--;
	}
	if (x == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_putline('A', 'B', 'C', x);
	y--;
	while (y > 1)
	{
		ft_putline('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
		ft_putline('A', 'B', 'C', x);
}
