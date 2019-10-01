/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:51:14 by ojoubout          #+#    #+#             */
/*   Updated: 2019/07/23 19:51:15 by ojoubout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
 
/* Not technically required, but needed on some UNIX distributions */
#include <sys/types.h>
#include <sys/stat.h>
/* 
void	ft_display_file(int fd, int size)
{

}*/

int		ft_filelen(int fd)
{
	char b[5];
	int len;
	len = 0;
	len += read(fd, b, 21);
	return len;
}
int	main (int argc, char **argv)
{
	int fd;
	//int size;
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		
		printf("%d", ft_filelen(fd));
	}
	
	return (0);
}