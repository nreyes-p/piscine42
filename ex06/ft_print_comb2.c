/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:47:48 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/10/20 18:20:20 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_digits(char digit1, char digit2, char digit3)
{
	bool	lastdigit;

	lastdigit = false;
	ft_putchar(digit1);
	ft_putchar(digit2);
	ft_putchar(digit3);
	if (digit1 == '7' && digit3 == '9')
	{
		lastdigit = true;
	}
	if (lastdigit != true)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	ft_putchar(number1);
	while (number1 <= 99)
	{
		number1 = number1 + 1;
		ft_putchar(number1);
	}
	/*while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				if (digit2 != digit3 && digit1 != digit3 && digit1 != digit2)
				{
					ft_write_digits(digit1, digit2, digit3);
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}*/
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
