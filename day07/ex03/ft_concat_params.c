/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comcat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 03:39:44 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/13 10:03:54 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		ft_params_length(int argc, char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	len = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				len++;
				j++;
			}
			if (i != 1)
				len++;
			i++;
		}
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;
	char	*concat;

	i = 1;
	len = 0;
	concat = malloc(ft_params_length(argc, argv) + 1);
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			if (i != 1)
				concat[len++] = '\n';
			while (argv[i][j])
				concat[len++] = argv[i][j++];
			i++;
		}
	}
	concat[len] = '\0';
	return (concat);
}

int main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return 0;
}