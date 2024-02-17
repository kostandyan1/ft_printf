/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:21:17 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/17 20:21:18 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		print_char(char c);
int		print_string(char *s);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int     print_hex(unsigned int n, int mp);
int     print_ptr(void *ptr);
int     ft_printf(const char *str, ...);

/*void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
*/
#endif
