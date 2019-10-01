/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 13:13:59 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/11 16:29:51 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int neg;

	num = 0;
	i = 0;
	neg = 1;
	if (*str == '-' || *str == '+')
	{
		neg = -*str + 44;
		i++;
	}
	else if (*str == ' ' || (*str > 8 && *str < 14))
		return (ft_atoi((str + 1)));
	while (*(str + i))
	{
		if (*(str + i) < 58 && *(str + i) > 47)
			num = num * 10 + (*(str + i) - 48);
		else
			break ;
		i++;
	}
	return (num * neg);
}
