/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_doop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:26:22 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/23 10:26:23 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_opp.h"

int				ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void			ft_calc(int value1, int value2, char op)
{
	int i;

	i = 0;
	while (g_opptab[i].opr[0])
	{
		if (g_opptab[i].opr[0] == op)
			break ;
		i++;
	}
	if (g_opptab[i].opr[0])
		g_opptab[i].oper(value1, value2);
	else
		g_opptab[i].oper(value1, value2);
	ft_putchar('\n');
}

int				main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_calc(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]);
	}
	return (0);
}
