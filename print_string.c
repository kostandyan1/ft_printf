/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkostand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:13:40 by vkostand          #+#    #+#             */
/*   Updated: 2024/02/13 20:13:44 by vkostand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_string(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *s = "adsasafsd";
	print_string(s);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
