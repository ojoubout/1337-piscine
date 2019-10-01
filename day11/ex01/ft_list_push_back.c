/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 13:23:48 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/21 13:23:49 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *p;

	list = ft_create_elem(data);
	p = *begin_list;
	if (p == NULL)
	{
		*begin_list = list;
		return ;
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = list;
}
