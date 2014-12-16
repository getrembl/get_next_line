/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:48:43 by getrembl          #+#    #+#             */
/*   Updated: 2014/12/16 21:31:16 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
int read(int fd, char *buf, int count);
fd = File descriptor depuis leauel lire;
buf = buffer de destination;
count = Nombre d\'octets a lire;

Retourne le nombre d\'octets lus ou -1 en cas d\'erreur;
*/




int 				get_next_line(int const fd, char **line)
{
	int				ret;
	char			*buf;
	static char		*bkp = NULL;
	char			*bkp_join;

	if (!line || !fd)
		return (-1);
	if (!bkp)
		bkp = ft_strnew(1);
	if (!(buf = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	ret = 1;
	while (ret > 0)
	{
		if((ret = read(fd, buf, BUFF_SIZE)) != EOF)
		{
			buf[ret] = '\0';
			bkp = ft_strjoin(bkp, buf);
		}
		if ((bkp_join = ft_memchr(bkp, (char)'n', ft_strlen(bkp))) != NULL)
		{
			*bkp_join = '\0';
			if (!(*line = ft_strdup(bkp)))
				return (-1);
			ft_memmove(bkp, bkp_join + 1, ft_strlen(bkp_join + 1) + 1);
			return (1);
		}
	}
	if (!(*line = ft_strdup(bkp)))
		return (-1);
	return (ret);
}
