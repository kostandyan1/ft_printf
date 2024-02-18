/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:48:09 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/18 15:17:25 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		print_char(char c);
int		print_string(char *s);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, int mp);
int		print_ptr(void *ptr);
int		ft_printf(const char *str, ...);

char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);

#endif
