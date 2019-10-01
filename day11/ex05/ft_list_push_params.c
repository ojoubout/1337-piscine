/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:39:51 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/21 15:39:52 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->data = data;
	list->next = *begin_list;
	*begin_list = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*first;

	first = NULL;
	i = 0;
	if (ac > 0)
	{
		first = ft_create_elem(av[0]);
		i++;
		while (i < ac)
		{
			ft_list_push_front(&first, av[i]);
			i++;
		}
	}
	return (first);
}
