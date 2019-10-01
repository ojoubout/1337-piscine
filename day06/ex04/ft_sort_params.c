/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:51:29 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/13 01:54:05 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i))
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

char	**ft_sort(char **argv, int size)
{
	int		i;
	int		j;
	char	*t;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size + 1)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				t = argv[i];
				argv[i] = argv[j];
				argv[j] = t;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	argv = ft_sort(argv, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
