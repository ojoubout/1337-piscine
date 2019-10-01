/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:43:34 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/22 10:43:37 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *prev;

	temp = *begin_list;
	if (temp != NULL && cmp(temp->data, data_ref) == 0)
	{
		*begin_list = temp->next;
		free(temp);
		ft_list_remove_if(begin_list, data_ref, cmp);
		return ;
	}
	while (temp != NULL && cmp(temp->data, data_ref) != 0)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return ;
	prev->next = temp->next;
	free(temp);
	ft_list_remove_if(begin_list, data_ref, cmp);
}
