/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 03:03:11 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/13 03:15:27 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *table;
	int i;

	i = 0;
	if (min < max)
	{
		table = malloc(4 * (max - min));
		while (min + i < max)
		{
			table[i] = min + i;
			i++;
		}
		return (table);
	}
	else
		return (0);
}

int		main()
{
	int *array = ft_range(15, 10);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return 0;
}