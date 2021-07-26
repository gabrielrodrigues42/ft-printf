/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:39:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 16:09:40 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_placeholder(char *tmp, int i, va_list args)
{
	if (tmp[i + 1] == '%')
		write(1, "%", 1);
	if (tmp[i + 1] == 'c')
		ft_char(args);
	if (tmp[i + 1] == 's')
		ft_string(args);
	if (tmp[i + 1] == 'i' || tmp[i + 1] == 'd')
		ft_number(args);
	if (tmp[i + 1] == 'u')
		ft_unumber(args);
	if (tmp[i + 1] == 'x')
		write(1, "x", 1);
	if (tmp[i + 1] == 'X')
		write(1, "X", 1);
	if (tmp[i + 1] == 'p')
		write(1, "p", 1);
	return (0);
}
