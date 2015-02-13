/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 16:11:47 by getrembl          #+#    #+#             */
/*   Updated: 2015/02/13 21:15:07 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	char *line;
	int ret = 1;
	int i = 0;
	int fd;

	line = ft_strnew(32);
	fd = open("test", O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("ret = %d line[%d] = <%s>\n", ret, i, line);
		i++;
	}
	return (0);
}
