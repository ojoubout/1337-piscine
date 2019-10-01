/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:11:05 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/21 16:11:06 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*p;
	unsigned int	count;

	p = begin_list;
	count = 0;
	while (p != NULL)
	{
		if (count == nbr)
			return (p);
		count++;
		p = p->next;
	}
	return (NULL);
}
