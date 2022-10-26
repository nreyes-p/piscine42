/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:38:59 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/10/26 13:34:07 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(int dlist[10], int n)
{
	int	i;
	int	depth;

	depth = n;
	while (depth >= 1)
	{
		while (dlist[n -1] <= 9)
		{
			i = 0;
			while (i < n)
			{
				ft_putchar(48 + dlist[i]);
				i++;
			}
			ft_putchar(',');
			ft_putchar(' ');
			dlist[n - 1]++;
		}
		depth--;
	}
}

void	ft_get_digits(int n, int dlist[n])
{
	int	i;

	i = n;
	while (dlist[0] <= 10 - n && i > 1)
	{
		while (dlist[i - 1] <= 10 - i + 1)
		{
			ft_putchar(48 + dlist[0]);
			ft_putchar(48 + dlist[i - 1]);
			ft_putchar(',');
			dlist[i - 1]++;
		}
		i--;
		dlist[0]++;
	}
}

void	ft_print_combn(int n)
{
	int	dlist[10];
	int	i;

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i < n)
		{
			dlist[i] = i;
			i++;
		}
		ft_get_digits(n, dlist);
	}
}
