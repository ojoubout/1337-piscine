/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 19:18:05 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/22 19:18:06 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *p;
	t_list *elem;

	elem = ft_create_elem(data);
	p = *begin_list;
	if (p == NULL || cmp(p->data, data) > 0)
	{
		elem->next = p;
		*begin_list = elem;
	}
	else
	{
		while (p->next && cmp(p->next->data, data) < 0)
		{
			p = p->next;
		}
		elem->next = p->next;
		p->next = elem;
	}
}
