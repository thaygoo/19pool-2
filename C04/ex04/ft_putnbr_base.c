/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:02:08 by huburton          #+#    #+#             */
/*   Updated: 2024/09/19 14:02:27 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!ft_check_base(base))
		return ;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < len)
	{
		ft_putchar(base[nbr]);
		return ;
	}
	ft_putnbr_base(nbr / len, base);
	ft_putchar(base[nbr % len]);
}

#include <limits.h>

int	main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n0:", 3);
	ft_putnbr_base(0, "0123456789abcdef");
	write(1, "\nINT_MAX:", 9);
	ft_putnbr_base(INT_MAX, "0123456789abcdef");
	write(1, "\nINT_MAX:", 9);
	ft_putnbr_base(INT_MAX, "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
	write(1, "\nINT_MIN:", 9);
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	write(1, "\n-2143247366 : ", 15);
	ft_putnbr_base(INT_MIN + 4236282, "'~");
	write(1, "\n-1:", 4);
	ft_putnbr_base(-1, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\v0123456789abcdef");
}