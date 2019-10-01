/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_places.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:39:40 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/11 18:49:12 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_places(int hour)
{
	if (hour < 24 && hour >= 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour == 0)
		printf(" %d.00 A.M. AND %d.00 A.M.", hour + 12, hour + 1);
	else if (hour < 11)
		printf(" %d.00 A.M. AND %d.00 A.M.", hour, hour + 1);
	else if (hour == 11)
		printf(" %d.00 A.M. AND %d.00 P.M.", hour, hour + 1);
	else if (hour == 12)
		printf(" %d.00 P.M. AND %d.00 P.M.", hour, hour - 11);
	else if (hour > 12 && hour < 23)
		printf(" %d.00 P.M. AND %d.00 P.M.", hour - 12, hour - 11);
	else if (hour == 23)
		printf(" %d.00 P.M. AND %d.00 A.M.", hour - 12, hour - 11);
	else if (hour == 24)
		ft_takes_places(hour - 24);
}
