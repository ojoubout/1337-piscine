/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:17:29 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/16 13:14:57 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(char *str, char *base)
{
	int i;
	int j;
	int exst;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (i > 0 && (str[i] == '+' || str[i] == '-'))
			return (0);
		exst = 0;
		while (base[j])
		{
			if (!base[0] || !base[1] || base[j] == '+' || base[j] == '-')
				return (0);
			if (base[j] == str[i])
				exst = 1;
			j++;
		}
		i++;
		if (!exst)
			return (0);
	}
	return (1);
}

int		ft_find(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int i;
	int blen;
	int neg;

	neg = 1;
	res = 0;
	i = 0;
	blen = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		neg = -str[0] + 44;
		str++;
	}
	if (!ft_check(str, base))
		return (0);
	while (base[blen])
		blen++;
	while (str[i + 1])
	{
		res = (res + ft_find(str[i], base)) * blen;
		i++;
	}
	res += ft_find(str[i], base);
	return (res * neg);
}
