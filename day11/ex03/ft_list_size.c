/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:18:50 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/21 15:18:52 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*p;
	int		i;

	i = 0;
	p = begin_list;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}
