/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 22:31:56 by amagnan           #+#    #+#             */
/*   Updated: 2018/09/17 15:51:31 by amagnan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <stdint.h>

int		b_printf(char *format, ...);
char	*ft_itoa_base(int64_t value, int base, const char *basetab);
void	ft_putstr0x(char *str);

#endif
