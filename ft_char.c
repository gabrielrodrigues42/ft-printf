/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:19:32 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 22:32:02 by gandrade         ###   ########.fr       */
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
