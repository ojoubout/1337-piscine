/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 01:17:50 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/18 02:47:42 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void                ft_putchar(char c)
{
    write(1, &c, 1);
}

void                ft_putnbr(int nb)
{
    unsigned int n;

    n = nb;
    if (nb < 0)
    {
        ft_putchar('-');
        n = nb * -1;
    }
    if (n < 10)
    {
        ft_putchar(n + '0');
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
}

void                ft_putstr(char *str)
{
    int i;

    i = 0;
    while (*(str + i) != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

void                ft_show_tab(t_stock_par *par)
{
    int i;
    int j;

    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size_param);
        ft_putchar('\n');
        j = 0;
        while (par[i].tab[j])
        {
            ft_putstr(par[i].tab[j]);
            ft_putchar('\n');
            j++;
        }
        i++;
    }
}

int 	main(int argc, char **argv)
{
	t_stock_par *t = ft_param_to_tab(argc, argv);
	ft_show_tab(t);
	return (0);
}