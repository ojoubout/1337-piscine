/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 02:45:40 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/13 03:01:28 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*c;

	len = 0;
	while (src[len])
		len++;
	c = malloc(len + 1);
	c[len] = '\0';
	while (src[--len])
		c[len] = src[len];
	return (c);
}
