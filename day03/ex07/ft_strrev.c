/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 02:21:44 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/10 21:30:23 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		n;
	int		len;
	char	t;

	len = 0;
	n = 0;
	while (*(str + len))
	{
		len++;
	}
	while (n < (len / 2))
	{
		t = *(str + n);
		*(str + n) = *(str + len - n - 1);
		*(str + len - n - 1) = t;
		n++;
	}
	return (str);
}
