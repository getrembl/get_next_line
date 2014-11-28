/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:08:18 by getrembl          #+#    #+#             */
/*   Updated: 2014/11/27 17:47:21 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		index;

	index = 0;
	if (dst && src)
	{
		if (ft_strlen (src) < n)
			dst[ft_strlen (src) + 1] = '\0';
		while (index < n)
		{
			dst[index] = src[index];
			index++;
		}
		return (dst);
	}
	return (NULL);
}
