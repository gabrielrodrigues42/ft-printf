/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:19:32 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 08:59:14 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(va_list args)
{
	t_types	type;

	type.character = va_arg(args, int);
	write(1, &type.character, 1);
	return (1);
}

int	ft_string(va_list args)
{
	t_types	type;
	int		i;

	type.string = va_arg(args, char *);
	i = 0;
	while (type.string[i] != '\0')
		write(1, &type.string[i++], 1);
	return (i);
}
