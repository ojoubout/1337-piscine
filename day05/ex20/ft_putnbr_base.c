/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 01:53:57 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/15 19:44:01 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base);

int		ft_check(int nbr, char *base, int div, int mod)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-div, base);
		ft_putchar(base[-mod]);
		return (0);
	}
	else if (nbr == 0)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int blen;
	int div;
	int mod;

	blen = 0;
	while (*(base + blen))
	{
		mod = blen + 1;
		while (base[mod])
		{
			if (base[mod] == base[blen])
				return ;
			mod++;
		}
		blen++;
	}
	if (blen < 2)
		return ;
	div = nbr / blen;
	mod = nbr % blen;
	if (ft_check(nbr, base, div, mod))
	{
		ft_putnbr_base(div, base);
		ft_putchar(base[mod]);
	}
}
