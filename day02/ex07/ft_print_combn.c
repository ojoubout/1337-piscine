/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 23:17:41 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/10 10:55:26 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check(int n, int count)
{
	if (count > 1)
	{
		if (n % 10 > n / 10 % 10)
			return (ft_check(n / 10, --count));
		else
			return (0);
	}
	else
		return (1);
}

void	ft_putnbr(int n)
{
	int num;
	int count;
	int c;

	num = n;
	count = 1;
	while (num / count / 10)
	{
		count *= 10;
	}
	if (n / count % 10 < 0)
		ft_putchar('-');
	while (count)
	{
		c = n / count % 10;
		if (c < 0)
			c = -c;
		ft_putchar(c + 48);
		count /= 10;
	}
}

void	ft_print_combn(int n)
{
	int count;
	int num;

	num = n;
	count = 1;
	while (num)
	{
		count *= 10;
		num--;
	}
	while (num / (count / 10) <= 10 - n)
	{
		num++;
		if (ft_check(num, n))
		{
			if (!(num / (count / 10)))
				ft_putchar('0');
			ft_putnbr(num);
			if (num / (count / 10) != 10 - n)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
