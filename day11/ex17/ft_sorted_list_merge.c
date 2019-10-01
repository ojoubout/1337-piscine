/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 19:43:57 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/22 19:43:59 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list, t_list *list, int (*cmp)())
{
	t_list *p;
	t_list *next;

	p = *begin_list;
	if (list)
	{
		if (p == NULL || cmp(p->data, list->data) > 0)
		{
			next = list->next;
			list->next = p;
			*begin_list = list;
		}
		else
		{
			while (p->next && cmp(p->next->data, list->data) < 0)
			{
				p = p->next;
			}
			next = list->next;
			list->next = p->next;
			p->next = list;
		}
		if (next)
			ft_sorted_list_merge(begin_list, next, cmp);
	}
}
