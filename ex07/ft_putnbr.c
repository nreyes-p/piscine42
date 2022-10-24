/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:10:09 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/10/24 16:05:33 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_pow(int x, int y)
{
	int	i;
	int	result;

	i = 1;
	result = x;
	while (i < y)
	{
		result = result * x;
		i++;
	}
	return (result);
}

int	ft_get_first(int n)
{
	while (n >= 10)
	{
		n = n / 10;
	}
	return (n);
}

void	ft_write_digit(int nb, int digits, int first)
{
	int	i;

	ft_putchar(48 + first);
	while (digits >= 1)
	{
		if (digits == 1)
		{
			ft_putchar(48 + nb % 10);
		}
		else
		{
			i = nb - (ft_pow(10, digits) * first);
			first = ft_get_first(i);
			ft_putchar(48 + first);
		}
		digits--;
		break ;
	}
	if (digits >= 1)
		ft_write_digit(i, digits, first);
}

void	ft_putnbr(int nb)
{
	int	first;
	int	digits;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	digits = 0;
	first = nb;
	while (first >= 10)
	{
		first = first / 10;
		digits++;
	}
	ft_write_digit(nb, digits, first);
}
