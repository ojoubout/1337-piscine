/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:06:45 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/13 23:14:03 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_word_length(char *s)
{
	int i;

	i = 0;
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_countwords(char *str)
{
	int i;
	int sw;
	int wc;

	wc = 0;
	i = 0;
	sw = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
			sw = 1;
		else
		{
			if (sw)
			{
				wc++;
				sw = 0;
			}
		}
		i++;
	}
	return (wc);
}

int		*ft_words(char *s)
{
	int		i;
	int		*t;
	int		sw;
	int		wc;
	int		m;

	t = (int*)malloc(4 * (ft_countwords(s) + 1));
	t[0] = 0;
	wc = 0;
	i = -1;
	sw = 1;
	while (s[++i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i] != '\0')
		{
			m = i - 1;
			if (i == 0 || s[m] == ' ' || s[m] == '\t' || s[m] == '\n')
			{
				t[++wc] = i;
				t[0]++;
			}
		}
	}
	return (t);
}

char	**ft_split_whitespaces(char *str)
{
	int		*wi;
	char	**split;
	int		i;
	int		j;
	int		len;

	i = 0;
	wi = ft_words(str);
	split = (char **)malloc(sizeof(char *) * ft_countwords(str) + 1);
	while (i < wi[0])
	{
		j = 0;
		len = ft_word_length(str + wi[i + 1]);
		split[i] = (char *)malloc((len + 1));
		while (j < len)
		{
			split[i][j] = str[wi[i + 1] + j];
			j++;
		}
		split[i][len] = '\0';
		i++;
	}
	split[i] = 0;
	return (split);
}
