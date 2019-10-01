/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:52:33 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/17 14:56:39 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	if (argc)
	{
		i = 0;
		while (*(*(argv + 0) + i))
		{
			ft_putchar(*(*(argv + 0) + i));
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
