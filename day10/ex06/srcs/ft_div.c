/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 00:20:04 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/23 00:20:06 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	ft_div(int value1, int value2)
{
	if (value2)
		ft_putnbr(value1 / value2);
	else
		ft_putstr("Stop : division by zero");
}
