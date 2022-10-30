/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:26:33 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/28 11:26:54 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	long	ln;
	int		i;

	ln = n;
	i = 0;
	if (ln <= 9 && ln >= 0)
		i = i + ft_putchar(ln + 48);
	else
	{
		i = i + ft_putnbr(ln / 10);
		i = i + ft_putnbr(ln % 10);
	}
	return (i);
}
// int main(void)
// {
// 	ft_unsigned(-1000);
// 	return 0;
// }
