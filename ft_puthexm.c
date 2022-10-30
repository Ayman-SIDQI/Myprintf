/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:56:20 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/27 18:44:28 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_puthexm(unsigned long ln)
{
	char		*s;
	size_t		i;

	i = 0;
	s = "0123456789ABCDEF";
	if (ln <= 15 && ln >= 0)
		i = i + ft_putchar(s[ln]);
	else
	{
		i = i + ft_puthexm(ln / 16);
		i = i + ft_puthexm(ln % 16);
	}
	return (i);
}
