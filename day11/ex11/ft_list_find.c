/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:20:21 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/21 22:20:22 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *p;

	p = begin_list;
	while (p)
	{
		if ((*cmp)(p->data, data_ref) == 0)
			return (p);
		p = p->next;
	}
	return (NULL);
}
