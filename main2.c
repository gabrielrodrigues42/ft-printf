/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:54:49 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 00:38:50 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_printf("%d\n", ft_printf("%s\n", "HELLO1234567890"));
	printf("%d\n", printf("%s\n", "HELLO1234567890"));
	return (0);
}
