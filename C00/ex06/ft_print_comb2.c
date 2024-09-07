/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:05:12 by huburton          #+#    #+#             */
/*   Updated: 2024/09/05 17:08:41 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display2(int a, int b)
{
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar((b / 10) + 48);
		ft_putchar((b % 10) + 48);
	}
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_display(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
	else
	{
		ft_putchar((a / 10) + 48);
		ft_putchar((a % 10) + 48);
	}
	ft_display2(a, b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_display(a, b++);
		}
		a++;
	}
}
