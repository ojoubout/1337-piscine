/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:59:34 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/22 16:59:35 by ojoubout         ###   ########.fr       */
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

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		n;
	int		len;
	void	*data;
	int		lf;

	len = ft_list_size(begin_list);
	n = 0;
	while (n < (len / 2))
	{
		lf = len - n - 1;
		data = ft_list_at(begin_list, n)->data;
		ft_list_at(begin_list, n)->data = ft_list_at(begin_list, lf)->data;
		ft_list_at(begin_list, lf)->data = data;
		n++;
	}
}
