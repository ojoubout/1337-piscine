/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:57:09 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/17 23:04:39 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *args;
	int			i;
	int			j;
	int			len;

	args = (t_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		args[i].size_param = len;
		args[i].str = av[i];
		args[i].copy = (char*)malloc(len + 1);
		j = 0;
		while (av[i][j])
		{
			args[i].copy[j] = av[i][j];
			j++;
		}
		args[i].copy[j] = '\0';
		args[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	args[i].str = 0;
	return (args);
}
