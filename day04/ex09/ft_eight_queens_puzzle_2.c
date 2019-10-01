/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:22:30 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/14 18:22:32 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int g_tab[8];
int g_s = 0;

int		ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int		ft_is_safe(int x, int y)
{
	int i;

	i = 0;
	if (y == 0)
		return (1);
	while (i < y)
	{
		if (g_tab[i] == x || ft_abs(g_tab[i] - x) == ft_abs(i - y))
			return (0);
		i++;
	}
	return (1);
}

void	ft_eight_queens(int y)
{
	int x;
	int i;

	i = 0;
	x = 0;
	while (x < 8)
	{
		if (ft_is_safe(x, y))
		{
			g_tab[y] = x;
			if (y == 7)
			{
				while (i < 8)
					ft_putchar(g_tab[i++] + 1 + 48);
				ft_putchar('\n');
				g_s++;
			}
			else
				ft_eight_queens(y + 1);
		}
		x++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	ft_eight_queens(0);
}
