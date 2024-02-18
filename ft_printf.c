/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:30:39 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/18 15:28:02 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	find_func(char c, void *s)
{
	unsigned int	i;

	i = 0;
	if (c == 'c')
		i += print_char((char)s);
	else if (c == 'd')
		i += print_int((int)s);
	else if (c == 'i')
		i += print_int((int)s);
	else if (c == 's')
		i += print_string((char *)s);
	else if (c == 'u')
		i += print_unsigned((unsigned int)s);
	else if (c == 'p')
		i += print_ptr(s);
	else if (c == 'x')
		i += print_hex((unsigned int)s, 87);
	else if (c == 'X')
		i += print_hex((unsigned int)s, 55);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;
	int				count;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_strchr("ucspdixX", str[i]))
				count += find_func(str[i], va_arg(args, void *));
			else if (str[i] == '%')
				count += print_char('%');
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
