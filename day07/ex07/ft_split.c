/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:18:26 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/20 13:18:29 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*g_sep;

int		ft_is_sep(char c)
{
	int i;

	i = 0;
	while (g_sep[i])
	{
		if (g_sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_word_length(char *s)
{
	int i;

	i = 0;
	while (!ft_is_sep(s[i]) && s[i] != '\0')
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
		if (ft_is_sep(str[i]) || str[i] == '\0')
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
		if (!ft_is_sep(s[i]) && s[i] != '\0')
		{
			m = i - 1;
			if (i == 0 || ft_is_sep(s[m]))
			{
				t[++wc] = i;
				t[0]++;
			}
		}
	}
	return (t);
}

char	**ft_split(char *str, char *charset)
{
	int		*wi;
	char	**split;
	int		i;
	int		j;
	int		len;

	i = 0;
	g_sep = charset;
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
