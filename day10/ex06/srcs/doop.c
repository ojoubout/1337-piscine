/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 23:40:23 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/22 23:40:25 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	(*g_oper[5])(int, int) = {&ft_sum, &ft_sub, &ft_mul, &ft_div, &ft_mod};

void	ft_calc(int value1, int value2, char op)
{
	int i;

	i = -1;
	if (op == '+')
		i = 0;
	else if (op == '-')
		i = 1;
	else if (op == '*')
		i = 2;
	else if (op == '/')
		i = 3;
	else if (op == '%')
		i = 4;
	if (i != -1)
		g_oper[i](value1, value2);
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_calc(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
	}
	return (0);
}
