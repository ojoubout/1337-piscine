/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:10:36 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/09 13:22:54 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*(str + i))
	{
		c = *(str + i);
		if ((c < 65 || c > 90) && (c < 97 || c > 122))
			return (0);
		i++;
	}
	return (1);
}
