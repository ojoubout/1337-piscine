/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 00:27:28 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/23 00:27:30 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	ft_mod(int value1, int value2)
{
	if (value2)
		ft_putnbr(value1 % value2);
	else
		ft_putstr("Stop : modulo by zero");
}
