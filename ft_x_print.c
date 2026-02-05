/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:23:30 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/19 01:14:43 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	print_x(unsigned int x, const char *set, int a)
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
	write(1, &value, 1);
	count++;
	return (count);
}

size_t	ft_x_print(unsigned int x, char c)
{
	const char	set[] = {"0123456789ABCDEF"};
	int			a;

	if (c == 'x')
		a = 32;
	else if (c == 'X')
		a = 0;
	return (print_x(x, set, a));
}
