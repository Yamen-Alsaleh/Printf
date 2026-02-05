/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 23:35:50 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/19 00:54:12 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_u_print(unsigned int l)
{
	size_t	count;
	char	temp;

	count = 0;
	if (l > 9)
		count += ft_u_print(l / 10);
	temp = (l % 10) + '0';
	count += write(1, &temp, 1);
	return (count);
}
