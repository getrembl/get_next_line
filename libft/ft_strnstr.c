/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 18:00:33 by getrembl          #+#    #+#             */
/*   Updated: 2014/11/27 17:31:38 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*s1_bkp;
	size_t		index;

	if (s1 && n >= ft_strlen(s2))
	{
		if (!s2 || !*s2)
			return ((char *)s1);
		s1_bkp = s1;
		index = 0;
		while (s1_bkp[index++] && n--)
			if (ft_memcmp (s1_bkp, s2, ft_strlen(s2)) == 0)
				return ((char *)s1_bkp);
	}
	return (NULL);
}
