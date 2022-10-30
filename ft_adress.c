/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:11:42 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/27 12:12:50 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

size_t	ft_adress(unsigned long n)
{
	size_t	i;

	i = 0;
	i = i + ft_putstr("0x");
	i = i + ft_puthexl(n);
	return (i);
}
// #include <stdio.h>
// int	main(int argc, char const *argv[])
// {
// 	char *a;
// 	int c = 48;
// 	int	*b;
// 	a = "AYMAN";
// 	b = &c;
// 	ft_adress(b);
// 	printf("%p %p %p ", &c, b, &b);
// 	return (0);
// }
