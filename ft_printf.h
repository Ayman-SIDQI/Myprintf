/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:13:23 by asidqi            #+#    #+#             */
/*   Updated: 2022/10/27 18:47:20 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_puthexm(unsigned long ln);
int		ft_puthexl(size_t ln);
int		ft_strlen(char *str);
size_t	ft_adress(unsigned long n);
int		ft_printf(const char *s, ...);
int		ft_unsigned(unsigned int n);
#endif
