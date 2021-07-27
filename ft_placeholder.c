/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:39:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 22:43:36 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholder(char *tmp, int i, va_list args)
{
	int	ret;

	if (tmp[i + 1] == '%')
		ret = write(1, "%", 1);
	if (tmp[i + 1] == 'c')
		ret = ft_char(args);
	if (tmp[i + 1] == 's')
		ret = ft_string(args);
	if (tmp[i + 1] == 'i' || tmp[i + 1] == 'd')
		ret = ft_number(args);
	if (tmp[i + 1] == 'u')
		ret = ft_unumber(args);
	if (tmp[i + 1] == 'x')
		ret = ft_hex(args, 87);
	if (tmp[i + 1] == 'X')
		ret = ft_hex(args, 55);
	if (tmp[i + 1] == 'p')
		write(1, "p", 1);
	return (ret);
}
