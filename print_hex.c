/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:20:45 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/14 16:20:47 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	create_string(unsigned int n)
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

static int	write_str(unsigned int n, int mp)
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

int	print_hex(unsigned int n, int mp)
{
	int i;

	if (n == 0)
	{
		print_char('0');
		return (0);
	}
	i = create_string(n);
	write_str(n, mp);
	return (i);
}

int	main(void)
{
	unsigned int a = 1000;

	print_hex(a, 87);
	return (0);
}
/*char *fill_str(unsigned int n, char *str)
{
	int c;

	c = count_len(n);

	str[c--] = '\0';
	while (str[c])
	{
		if (n % 16 <= 9)
			str[c] = (n % 16) + 48;
		else if (n % 16 == 10)
			str[c] = 'A';
		else if (n % 16 == 11)
			str[c] = 'B';
		else if (n % 16 == 12)
			str[c] = 'C';
		else if (n % 16 == 13)
			str[c] = 'D';
		else if (n % 16 == 14)
			str[c] = 'E';
		else if (n % 16 == 15)
			str[c] = 'F';
		c--;
		n /= 10;
	}

	return (str);
}*/
