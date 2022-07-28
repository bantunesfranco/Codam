/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ovan-rhe <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 10:06:14 by ovan-rhe      #+#    #+#                 */
/*   Updated: 2022/07/12 09:34:08 by bfranco       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_side(int x, int y);
int		print_top_bot(int x, char c);

void	rush(int x, int y)
{
	char	c;

	if (x <= 0 || y <= 0)
	{
	}
	else
	{
		c = 'A';
		print_top_bot(x, c);
		print_side(x, y);
		if (y > 1)
		{
			print_top_bot(x, c);
		}
	}
}

void	print_side(int x, int y)
{
	int	i;
	int	n;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('B');
		n = 2;
		while (n < x)
		{
			ft_putchar(' ');
			n++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		write(1, "\n", 1);
		i++;
	}
}

int	print_top_bot(int x, char c)
{
	int	n;

	if (x == 1)
	{
		ft_putchar(c);
		write(1, "\n", 1);
		return (0);
	}
	else if (x > 1)
	{
		ft_putchar(c);
	}
	n = 2;
	while (n < x)
	{
		ft_putchar('B');
		n++;
	}
	c = 'C';
	ft_putchar(c);
	write(1, "\n", 2);
	return (0);
}
