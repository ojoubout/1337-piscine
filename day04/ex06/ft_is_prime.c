/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 17:09:05 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/14 18:00:38 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (nb);
	while (i * i > 0 && i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (i - 1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int max;

	i = 2;
	max = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	while (i <= max)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
