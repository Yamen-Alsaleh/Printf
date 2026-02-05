/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 23:04:35 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/22 17:41:22 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	print_x(unsigned long x, const char *set, int a)
{
	char	value;
	size_t	count;

	count = 0;
	if (x > 15)
		count += print_x(x / 16, set, a);
	if (x % 16 >= 10)
		value = set[x % 16] + a;
	else
		value = set[x % 16];
	count += write(1, &value, 1);
	return (count);
}

static size_t	print_hex_ulong(unsigned long x, char c)
{
	const char	set[] = {"0123456789ABCDEF"};
	int			a;

	if (c == 'x')
		a = 32;
	else
		a = 0;
	return (print_x(x, set, a));
}

size_t	ft_p_print(void *p)
{
	uintptr_t	address;
	size_t		count;

	address = (uintptr_t)p;
	if (!p)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += print_hex_ulong(address, 'x');
	return (count);
}
