/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 10:13:33 by getrembl          #+#    #+#             */
/*   Updated: 2015/01/12 14:17:57 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = malloc (size * sizeof(char))))
		return (NULL);
	while (size--)
		*str++ = '\0';
	return (str);
}
