/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:03:44 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/18 15:18:30 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int n)
{
	int		c;
	char	*n1;

	n1 = ft_itoa(n);
	c = print_string(n1);
	free(n1);
	return (c);
}
/*
int	main(void)
{
	print_int(-2147483648);
	return (0);
}*/
