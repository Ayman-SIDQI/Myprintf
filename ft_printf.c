/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:54:23 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/27 18:46:17 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	printer(char c, va_list args)
{
	int	total;

	total = 0;
	if (c == 'c')
		total = total + ft_putchar(va_arg(args, int));
	else if (c == 's')
		total = total + ft_putstr(va_arg(args, char *));
	else if ((c == 'd' || c == 'i'))
		total = total + ft_putnbr(va_arg(args, int));
	else if (c == 'X')
		total = total + ft_puthexm(va_arg(args, unsigned int));
	else if (c == 'x')
		total = total + ft_puthexl(va_arg(args, unsigned int));
	else if (c == 'u')
		total = total + ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		total = total + ft_adress(va_arg(args, unsigned long));
	else if (c == '%')
		total = total + ft_putchar(c);
	return (total);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		total;

	i = 0;
	total = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			total = total + printer(s[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			total++;
		}
		i++;
	}
	va_end(args);
	return (total);
}
// #include<stdio.h>
// int	main(void)
// {
// 	int	a = -497;
// 	ft_printf("%p\n", &a);
// 	printf("%p\n", &a);
// 	return 0;
// }
