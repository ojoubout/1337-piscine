/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 03:03:11 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/13 03:39:19 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *table;
	int i;

	i = 0;
	if (min < max)
	{
		table = (int*)malloc(sizeof(int) * (max - min));
		while (min + i < max)
		{
			table[i] = min + i;
			i++;
		}
		return (table);
	}
	else
		return (NULL);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (((unsigned int)max - (unsigned int)min) > 2147483647)
		return (0);
	*range = ft_range(min, max);
	if (*range)
		return (max - min);
	return (0);
}
