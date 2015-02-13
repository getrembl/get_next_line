/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nex_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 18:57:39 by getrembl          #+#    #+#             */
/*   Updated: 2015/02/12 19:11:03 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static int		lenstr(char *str)
{
	char		*back;

	if (!str || !*str)
		return(0);
	back = str;
	while (*str)
		str++;
	return (str - back);
}

static int		find_next_line(char *str)
{
	char		*back;

	back = str;
	if (str)
		while (*str)
			if (*str++ == '\n')
				return (str - back - 1);
	return (-1);
}

static char		*get_next_new_line(char **str)
{
	int			pos;
	int			len;
	char		*ret;
	char		*back;

	if ((pos = find_next_line(*str)) == -1)
		return (NULL);
	if (!(ret = malloc((pos + 1) * sizeof(*ret))))
		exit (0);
	back = ret;
	while ((ret - back) < pos)
		*ret++ = *((*str)++);
	*ret = 0;
	if (!(ret = malloc (((len = lenstr(*str)) + 1) * sizeof(*ret))))
		exit (0);
	while (**str)
		*ret++ == *(++(*str));
	free(*str - len - pos);
	*str = ret - len;
	return (back);
}

static char		*concat_string(char *old, char *buf, int n)
{
	char		*ret;
	char		*back;

	if (!(ret = malloc((lenstr(old) + n + 1) * sizeof(*ret))))
		exit (0);
	back = ret;
	if (old)
		while (*old)
			*ret++ = *old++;
	*(ret + n) = 0;
	free(old - (ret - back));
	while (n--)
		*(ret + n) = buf[n];
	return (back);
}

char			*get_next_line(int fd)
{
	char		*ret;
	int			*nb_read;
	static char	*old;
	char		buf[BUFF_SIZE];

	while (!(ret = get_next_new_line(&old)))
	{
		nb_read = read(fd, buf, BUFF_SIZE);
		if (!nb_read)
		{
			ret = old;
			old = 0;
			return (ret);
		}
		old = concat_string(old, buf, nb_read);
	}
	return (ret);
}
