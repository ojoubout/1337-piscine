/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 02:10:02 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/21 02:10:10 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int		g_from = 0;
char				*g_to;
int					g_toi = 0;

int		ft_char_value(char n, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_from_base(char *nbr, char *base)
{
	int blen;
	int i;
	int n;

	blen = 0;
	i = 0;
	n = 1;
	if (nbr[0] == '-' || nbr[0] == '+')
	{
		n = -nbr[0] + 44;
		i++;
	}
	while (base[blen])
		blen++;
	while (nbr[i])
	{
		if (nbr[i + 1] == '\0')
			g_from = (n * g_from) * blen + (n * ft_char_value(nbr[i], base));
		else
			g_from = g_from * blen + ft_char_value(nbr[i], base);
		i++;
	}
	return (g_from);
}

void	ft_to_base(int nbr, char *base)
{
	int blen;
	int div;
	int mod;
	int i;

	blen = 0;
	i = 0;
	while (base[blen])
		blen++;
	div = nbr / blen;
	mod = nbr % blen;
	if (nbr < 0)
	{
		div = -div;
		mod = -mod;
		g_to[g_toi] = '-';
		g_toi++;
	}
	if (div)
		ft_to_base(div, base);
	g_to[g_toi] = base[mod];
	g_toi++;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	n;
	unsigned int	num;
	int				i;

	n = ft_from_base(nbr, base_from);
	num = n;
	i = 0;
	while (num)
	{
		num /= 16;
		i++;
	}
	g_to = (char*)malloc(i + 1);
	ft_to_base(n, base_to);
	g_to[g_toi] = '\0';
	return (g_to);
}
