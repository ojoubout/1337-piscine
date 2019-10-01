/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 01:07:49 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/10 10:54:06 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_tools.h"

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
