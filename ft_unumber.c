/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumber.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:48:14 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 15:49:12 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_unumber(va_list args)
{
	t_types	type;
	char	*res;
	int		i;

	type.number = va_arg(args, int);
	res = ft_itoa_unsigned(type.number);
	i = 0;
	while (res[i] != '\0')
		write(1, &res[i++], 1);
	ft_strclear(&res);
	return (0);
}
