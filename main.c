/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:25:38 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/27 12:38:23 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_printf("%c\n", 'C');
	ft_printf("%s\n", "HELLO");
	ft_printf("%i\n", INT_MAX);
	ft_printf("%i\n", INT_MIN);
	ft_printf("%i\n", 0);
	ft_printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
	ft_printf("%d\n", 0);
	ft_printf("%u\n", UINT_MAX);
	ft_printf("%u\n", 0);
	ft_printf("%x\n", INT_MAX);
	ft_printf("%x\n", INT_MIN);
	ft_printf("%x\n", UINT_MAX);
	ft_printf("%x\n", 0);
	ft_printf("%X\n", INT_MAX);
	ft_printf("%X\n", INT_MIN);
	ft_printf("%X\n", UINT_MAX);
	ft_printf("%X\n", 0);
	printf("\n");
	printf("%c\n", 'C');
	printf("%s\n", "HELLO");
	printf("%i\n", INT_MAX);
	printf("%i\n", INT_MIN);
	printf("%i\n", 0);
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	printf("%d\n", 0);
	printf("%u\n", UINT_MAX);
	printf("%u\n", 0);
	printf("%x\n", INT_MAX);
	printf("%x\n", INT_MIN);
	printf("%x\n", UINT_MAX);
	printf("%x\n", 0);
	printf("%X\n", INT_MAX);
	printf("%X\n", INT_MIN);
	printf("%X\n", UINT_MAX);
	printf("%X\n", 0);
	return (0);
}
