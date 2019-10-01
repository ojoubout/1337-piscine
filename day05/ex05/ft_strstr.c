/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 01:49:37 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/09 10:33:38 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == *to_find)
		{
			j = 0;
			while (*(to_find + j) && *(str + i + j) == *(to_find + j))
			{
				if (!*(to_find + j + 1))
				{
					return (str + i);
				}
				j++;
			}
		}
		i++;
	}
	if (*to_find == '\0')
		return (str);
	else
		return (0);
}
