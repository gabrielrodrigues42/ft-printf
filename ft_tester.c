/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:00:00 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/19 12:31:34 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** It will manage the following conversions: cspdiuxX%
** Manage any combination of the following flags: ’-0.’ and minimum field width with all conversions
** Manage all the following flags: ’# +’ (yes, one of them is a space)
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void) {

	void *pointer = NULL;

	printf("----------Chars Section----------\n\n");
	printf("printf pointer: %p\n", pointer);
	printf("printf percent: %%\n");
	printf("printf character: %c\n", 'C');
	printf("printf string: %s\n", "C Sucks!");
	printf("\n");

	printf("----------Numbers Section----------\n\n");
	printf("printf unsigned_decimal_max: %u\n", UINT_MAX);
	printf("printf decimal_min: %d\n", INT_MIN);
	printf("printf decimal_max: %d\n", INT_MAX);
	printf("printf integer_min: %i\n", INT_MIN);
	printf("printf integer_max: %i\n", INT_MAX);
	printf("printf hexadecimal_min: %x\n", INT_MIN);
	printf("printf hexadecimal_max: %x\n", INT_MAX);
	printf("\n");

	return 0;
}