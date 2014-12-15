/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:48:43 by getrembl          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/12/15 19:01:47 by getrembl         ###   ########.fr       */
=======
/*   Updated: 2014/12/09 22:34:22 by getrembl         ###   ########.fr       */
>>>>>>> 220c0cd4c4730a94d77aee85a010ed3d46bafe77
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD

int read(int fd, char *buf, int count);
fd = File descriptor depuis leauel lire;
buf = buffer de destination;
count = Nombre d\'octets a lire;

Retourne le nombre d\'octets lus ou -1 en cas d\'erreur;





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
	while((ret = read(fd, buf, BUFF_SIZE)) && ())
	{
		**line++ = *buf++;
	}

	return (1); // when the line is finished but the file is not finished
	return (-1); // when there error
	return (0); // when file is finished
}

int			main(void)
{
	char	*str;
	int		fd;

=======
static size_t		ft_strlen(char *s)
{
	size_t			count;

	count = 0;
	if(!s)
		return (NULL);
	while (*s++)
		count++;
	return (count);
}

static char			*ft_strdup(const char *s1)
{
	char 			*dst;
	int				i;

	dst = NULL;
	i = 0;
	if ((s == NULL)
		|| !(dst = (char *)malloc(sizeof(dst) * (sizeof(ft_strlen(s1) + 1)))))
		return (NULL);
	while ((dst[i] = src[i]))
		i++;
	dst[i] = '\0';
	return (dst);
}

int					get_next_line(int const fd, char **line)
{
	static char 	*line_bkp = "";
	int 			ret;
	return (1); // when the line is finished but the file is not finished
	return (-1); // when there error
	return (0); // when file is finished
}

int			main(void)
{
	char	*str;
	int		fd;

>>>>>>> 220c0cd4c4730a94d77aee85a010ed3d46bafe77
	str = "Hi babe\nHow are you\n\nI'm fine and you\nit's ok\n";
	while (get_next_line(fd, (char **)str) == 1)
		write(1, **line, strlen(*line));
	return (0);
}
