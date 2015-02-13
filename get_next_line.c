/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:48:43 by getrembl          #+#    #+#             */
/*   Updated: 2015/02/13 21:16:53 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**    ssize_t read(int fd, void *buf, size_t nbyte);
**    fd = File descriptor depuis leauel lire;
**    buf = buffer de destination;
**    nbyte = Nombre d\'octets a lire;
**
**    Return number of byte read or -1 for an error;
*/
/*
int 				get_next_line(int const fd, char **line)
{
	int				ret;
	char			*buf;
	static char		*bkp = NULL;
	char			*bkp_join;

	if (fd < 0 || BUFF_SIZE < 1	|| (!bkp && (bkp = ft_strnew(1)) == NULL))
		return (-1);
		ret = 1;
	while (ret > 0)
	{
		buf = ft_strnew(BUFF_SIZE + 1);
		if((ret = read(fd, buf, BUFF_SIZE)) != EOF && ret > 0)
		{
			buf[ret] = '\0';
			bkp = ft_strjoin(bkp, buf);
		}
		if ((bkp_join = ft_strchr(bkp, '\n')) != NULL)
		{
			*bkp_join = '\0';
			if (!(*line = ft_strdup(bkp)))
				return (-1);
			ft_memmove(bkp, bkp_join + 1, ft_strlen(bkp_join + 1) + 1);
			return (1);
		}
	}
	if (!(*line = ft_strdup(bkp)) || !line)
		return (-1);
	return (ret);
}
*/

 /*
 **    In the function get_next_line, i[0] is a ret, i[1] is a principal index,
 **    i[2] is a secondary index.
 */

int					get_next_line(int const fd, char **line)
{
	int				i[3];
	char			*buffer;
	static char		*bkp = NULL;

	i[1] = 0;
	i[2] = 0;
	buffer = ft_strnew(BUFF_SIZE + 1);
	if(((i[0] = read(fd, buffer, BUFF_SIZE)) == EOF))
		return (0);
	while (i[1] < BUFF_SIZE)
	{
		if (buffer[i[1]] == '\n')
		{
			bkp = ft_strsub(buffer, i[2], i[1]);
			if (!(*line = ft_strdup(bkp)) || !line)
				return(-1);
			i[2] = i[1];
		return (1);
		}
		i[1]++;
	}
	return (0);
}
