/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:22:24 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/10 13:17:22 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int num;

	num = 0;
	while (num < 999)
	{
		num++;
		if (num / 100 < num / 10 % 10 && num / 10 % 10 < num % 10)
		{
			ft_putchar(num / 100 + 48);
			ft_putchar(num / 10 % 10 + 48);
			ft_putchar(num % 10 + 48);
			if (num / 100 < 7)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
