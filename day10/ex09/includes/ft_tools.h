/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:09:38 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/23 12:09:39 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOOLS_H
# define FT_TOOLS_H

typedef struct	s_opp
{
	char *opr;
	void (*oper)(int, int);
}				t_opp;

int				ft_atoi(char *nbr);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);

#endif
