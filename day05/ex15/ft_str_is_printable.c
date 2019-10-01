/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:21:03 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/09 16:23:26 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if ((*(str + i) < 32 || *(str + i) > 127))
			return (0);
		i++;
	}
	return (1);
}