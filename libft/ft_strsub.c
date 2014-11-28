/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 22:35:03 by getrembl          #+#    #+#             */
/*   Updated: 2014/11/27 17:35:14 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s_bkp;
	unsigned int	i;
	unsigned int	i_bis;

	i = start;
	i_bis = 0;
	if (!(s_bkp = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (s && i && len)
		while (s[i] && i_bis < len)
			s_bkp[i_bis++] = s[i++];
	return (s_bkp);
}
