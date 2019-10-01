/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:04:23 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/17 15:04:24 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	while (0 < i)
	{
		j = 0;
		while (*(*(argv + i) + j))
		{
			ft_putchar(*(*(argv + i) + j));
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
