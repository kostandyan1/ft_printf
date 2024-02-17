/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:49:43 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/15 16:49:45 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	create_string(unsigned int n)
{
	int	i;

	i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	print_unsigned(unsigned int n)
{
	int i;

	i = create_string(n);
	if (n > 9)
		print_unsigned(n / 10);
	if (n <= 9)
	{
		ft_putchar_fd(n + 48, 1);
		return (0);
	}
	ft_putchar_fd((n % 10) + 48, 1);
	return (i);
}
/*
int	main(void)
{
	int n = -1;
	print_unsigned(n);
	return (0);
}*/
