/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <getrembl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 23:30:12 by getrembl          #+#    #+#             */
/*   Updated: 2014/11/27 16:54:20 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	int		*ptr;

	ptr = malloc (size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
