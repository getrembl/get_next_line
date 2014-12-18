/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 16:11:47 by getrembl          #+#    #+#             */
/*   Updated: 2014/12/18 18:26:51 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "get_next_line.h"

int main()
{
	char *line;
	//int fd;
	int ret = 1;
	int i = 0;

	line = NULL;
	//fd = open("mangcc", O_RDONLY);
	//while((get_next_line(fd, &line)) > 0)
	while (ret == 1)
	{
		ret = get_next_line(0, &line);
		printf("ret = %d line[%i] = <%s>\n", ret, i, line);
		//free(line);
		i++;
		//ft_putstr(line);
		//ft_putchar('\n');
	}
	return (0);
}
