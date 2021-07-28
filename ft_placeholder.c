/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:39:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 01:22:55 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholder(char *format, int offset, va_list args)
{
	int	ret;

	if (format[offset + 1] == 'i' || format[offset + 1] == 'd')
		ret = ft_number(args);
	if (format[offset + 1] == 'u')
		ret = ft_unumber(args);
	if (format[offset + 1] == 'x')
		ret = ft_hex(args, 87);
	if (format[offset + 1] == 'X')
		ret = ft_hex(args, 55);
	if (format[offset + 1] == 'c')
		ret = ft_char(args);
	if (format[offset + 1] == 's')
		ret = ft_string(args);
	if (format[offset + 1] == 'p')
		ret = write(1, "p", 1);
	if (format[offset + 1] == '%')
		ret = write(1, "%", 1);
	return (ret);
}
