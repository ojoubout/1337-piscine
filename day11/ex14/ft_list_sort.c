/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:40:45 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/22 11:40:46 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *p;

	p = NULL;
	while (nbr > 0)
	{
		if (p != NULL)
		{
			if (p->next != NULL)
				p = p->next;
			else
				return (NULL);
		}
		else
			p = begin_list;
		nbr--;
	}
	return (p);
}

int			ft_list_size(t_list *begin_list)
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

void		ft_list_swap(t_list **l1, t_list **l2)
{
	(*l1)->next = (*l2)->next;
	(*l2)->next = *l1;
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	int		j;
	t_list	*l1;
	t_list	*l2;

	i = 0;
	while (i < ft_list_size(*begin_list))
	{
		j = 1;
		while (j < ft_list_size(*begin_list) - i)
		{
			l1 = ft_list_at(*begin_list, j);
			l2 = ft_list_at(*begin_list, j + 1);
			if (cmp(l1->data, l2->data) > 0)
			{
				if (j > 1)
					ft_list_at(*begin_list, j - 1)->next = l2;
				ft_list_swap(&l1, &l2);
				if (j == 1)
					*begin_list = l2;
			}
			j++;
		}
		i++;
	}
}
