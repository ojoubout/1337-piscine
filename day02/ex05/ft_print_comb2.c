/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:45:57 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/10 10:50:44 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	num;

	num = 0;
	while (num < 9999)
	{
		num++;
		if (num / 100 < num % 100)
		{
			ft_putchar(num / 1000 + 48);
			ft_putchar(num / 100 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(num / 10 % 10 + 48);
			ft_putchar(num % 10 + 48);
			if (num / 100 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
