/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:52:15 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/17 18:16:25 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	create_string(unsigned long long n)
{
	int	i;

	i = 1;
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static int	write_str(unsigned long long n, int mp)
{
	if (n >= 16)
	{
		write_str(n / 16, mp);
		write_str(n % 16, mp);
	}
	else if (n < 10)
		print_char(n + 48);
	else
		print_char(n + mp);
	return (0);
}

static int	print_hexa(unsigned long long n, int mp)
{
	if (n == 0)
	{
		print_char('0');
		return (0);
	}
	create_string(n);
	write_str(n, mp);
	return (0);
}

int	print_ptr(void *ptr)
{
	unsigned long long	s;
	int					count;

	count = 0;
	s = (unsigned long long)ptr;
	write (1, "0x", 2);
	print_hexa(s, 87);
	return (0);
}
/*
int main()
{
    char *ptr = "dasdss";
    print_ptr(ptr);
    return (0);
}*/
