/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:48:56 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/16 15:39:04 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int blen;
	int div;
	int mod;

	blen = 0;
	while (*(base + blen))
		blen++;
	div = nbr / blen;
	mod = nbr % blen;
	if (nbr)
	{
		ft_putnbr_base(div, base);
		ft_putchar(base[mod]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 16)
		{
			ft_putchar('\\');
			ft_putchar('0');
			ft_putnbr_base(str[i], "0123456789abcdef");
		}
		else if (str[i] < 32)
		{
			ft_putchar('\\');
			ft_putnbr_base(str[i], "0123456789abcdef");
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
