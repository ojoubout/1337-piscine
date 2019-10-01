/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:58:15 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/16 19:10:04 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnstr(char *str, int i)
{
	while (str[i] && i < 16)
	{
		if (str[i] > 31)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	ft_putnbr_base(long nbr, char *base, int digits)
{
	int		blen;
	long	zeros;
	long	max;

	max = 1;
	zeros = 16;
	while (digits--)
		max *= 16;
	while (digits && zeros < max)
	{
		if (!(nbr / zeros))
			ft_putchar('0');
		zeros *= 16;
	}
	blen = 0;
	while (*(base + blen))
		blen++;
	if (nbr)
	{
		ft_putnbr_base(nbr / blen, base, 0);
		ft_putchar(base[nbr % blen]);
	}
}

void	ft_print(char *str)
{
	int j;
	int i;
	int len;

	len = 0;
	j = 0;
	while (str[len])
		len++;
	ft_putnbr_base((long)(str + j), "0123456789abcdef", 8);
	ft_putstr(":\t");
	i = j;
	while (j < 16)
	{
		if (j < len)
			ft_putnbr_base(str[j], "0123456789abcdef", 2);
		if ((j % 2))
			ft_putchar('\t');
		j++;
	}
	ft_putchar('\t');
	ft_putnstr(str, i);
	ft_putchar('\n');
}

void	ft_print_memory(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	while (i < len / 16 + 1)
	{
		ft_print(str + (i * 16));
		i++;
	}
}
