/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_dev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:47:48 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/10/21 13:42:48 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_digits(int number1, int number2, bool lastdigit)
{
	ft_putchar(48 + number1 / 10);
	ft_putchar(48 + number1 % 10);
	ft_putchar(' ');
	ft_putchar(48 + number2 / 10);
	ft_putchar(48 + number2 % 10);
	if (lastdigit != true)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		number1;
	int		number2;
	bool	lastdigit;

	number1 = 0;
	while (number1 <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			lastdigit = (number1 == 98 && number2 == 99);
			ft_write_digits(number1, number2, lastdigit);
			number2++;
		}
		number1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
