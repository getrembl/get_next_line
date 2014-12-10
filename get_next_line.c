/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:48:43 by getrembl          #+#    #+#             */
/*   Updated: 2014/12/09 22:34:22 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

	str = "Hi babe\nHow are you\n\nI'm fine and you\nit's ok\n";
	while (get_next_line(fd, (char **)str) == 1)
		write(1, **line, strlen(*line));
	return (0);
}
