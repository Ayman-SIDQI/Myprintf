/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:54:38 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/27 18:44:09 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_puthexl(size_t ln)
{
	char	*s;
	int		i;

	i = 0;
	s = "0123456789abcdef";
	if (ln <= 15 && ln >= 0)
		i = i + ft_putchar(s[ln]);
	else
	{
		i = i + ft_puthexl(ln / 16);
		i = i + ft_puthexl(ln % 16);
	}
	return (i);
}
