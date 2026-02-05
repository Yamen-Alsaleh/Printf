/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:17:14 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/19 01:06:00 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_id_print(int n)
{
	size_t	count;
	char	temp;
	long	l;

	l = n;
	count = 0;
	if (l < 0)
	{
		count += write(1, "-", 1);
		l = l * -1;
	}
	if (l > 9)
		count += ft_id_print((int)(l / 10));
	temp = (l % 10) + '0';
	count += write(1, &temp, 1);
	return (count);
}
