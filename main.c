/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 16:11:47 by getrembl          #+#    #+#             */
/*   Updated: 2014/12/12 16:17:04 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
	int fd;
	char *line = NULL;

	fd = open("test", O_RDONLY);
	while (get_next_line(fd, &line) == 1)
		printf (&line);
	return (0);
}
