/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 20:27:25 by getrembl          #+#    #+#             */
/*   Updated: 2014/11/24 21:47:09 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dst_bkp;
	const char	*src_bkp;
	int			i;

	dst_bkp = dst;
	src_bkp = src;
	i = 0;
	while (n--)
	{
		dst_bkp[i] = src_bkp[i];
		if (src_bkp[i] == (unsigned char)c)
			return (&dst_bkp[i + 1]);
		i++;
	}
	return (NULL);
}
