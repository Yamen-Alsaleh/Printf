/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:11:57 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/22 17:42:23 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	format(va_list *ls, const char c)
{
	if (c == 'c')
		return (ft_c_print((char)va_arg(*ls, int)));
	else if (c == 's')
		return (ft_s_print(va_arg(*ls, char *)));
	else if (c == 'p')
		return (ft_p_print(va_arg(*ls, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_id_print(va_arg(*ls, int)));
	else if (c == 'u')
		return (ft_u_print(va_arg(*ls, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_x_print(va_arg(*ls, unsigned int), c));
	return (0);
}

int	ft_printf(const char *c, ...)
{
	size_t	count;
	int		i;
	va_list	ls;

	va_start(ls, c);
	i = 0;
	count = 0;
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1])
		{
			if (c[i + 1] == '%')
				count += write(1, "%", 1);
			else
				count += format(&ls, c[i + 1]);
			i += 2;
		}
		else
			count += write(1, &c[i++], 1);
	}
	va_end(ls);
	return ((int)count);
}
