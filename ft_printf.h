/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:35:26 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 22:26:05 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_types
{
	void	*pointer;
	char	*string;
	int		character;
	int		number;
	int		unumber;
	int		hexadecimal;
}	t_types;

int	ft_printf(const char *format, ...);
int	ft_vprintf(const char *format, va_list args);
int	ft_placeholder(char *tmp, int i, va_list args);
int	ft_char(va_list args);
int	ft_string(va_list args);
int	ft_number(va_list args);
int	ft_unumber(va_list args);
int	ft_hex(va_list args, int x);

#endif