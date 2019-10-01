/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:32:16 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/10 16:55:51 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	cpos;
	int mpos;
	int rep;
	int t;

	cpos = 0;
	mpos = size - 1;
	rep = 1;
	while (rep)
	{
		rep = 0;
		while (cpos < mpos)
		{
			if (tab[cpos + 1] < tab[cpos])
			{
				t = tab[cpos];
				tab[cpos] = tab[cpos + 1];
				tab[cpos + 1] = t;
				rep = 1;
			}
			cpos++;
		}
		cpos = 0;
		mpos--;
	}
}
