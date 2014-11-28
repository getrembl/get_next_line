/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: getrembl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:06:58 by getrembl          #+#    #+#             */
/*   Updated: 2014/11/27 16:15:30 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2");
		n -= 2000000000;
	}
	if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n <= 9)
		ft_putchar (n + 48);
	else
	{
		ft_putnbr (n / 10);
		ft_putnbr (n % 10);
	}
}
