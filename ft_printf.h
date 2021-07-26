/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:35:26 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 14:43:25 by gandrade         ###   ########.fr       */
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
	int		integer;
	int		decimal;
	int		u_decimal;
	int		hexadecimal;
	int		c_hexadecimal;
}	t_types;

int	ft_printf(const char *format, ...);
int	ft_vprintf(const char *format, va_list args);
int	ft_placeholder(char *tmp, int i, va_list args);
int	ft_char(va_list args);
int	ft_string(va_list args);
int	ft_integer(va_list args);

#endif