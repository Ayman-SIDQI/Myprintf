/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:37:19 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/23 13:37:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(int n)
{
	long	ln;
	int		i;

	ln = n;
	i = 0;
	if (ln < 0)
	{
		ln = ln * (-1);
		i = i + ft_putchar('-');
	}
	if (ln >= 0 && ln <= 9)
		i = i + ft_putchar(ln + 48);
	else
	{
		i = i + ft_putnbr(ln / 10);
		i = i + ft_putnbr(ln % 10);
	}
	return (i);
}
