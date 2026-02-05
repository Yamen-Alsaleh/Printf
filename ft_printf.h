/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 22:18:22 by yalsaleh          #+#    #+#             */
/*   Updated: 2025/12/19 00:50:14 by yalsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *s, ...);
size_t	ft_p_print(void *p);
size_t	ft_c_print(char c);
size_t	ft_id_print(int n);
size_t	ft_s_print(char *c);
size_t	ft_u_print(unsigned int l);
size_t	ft_x_print(unsigned int x, char c);
#endif
