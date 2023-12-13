/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:36:17 by clira-ne          #+#    #+#             */
/*   Updated: 2023/12/13 19:56:26 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(char flag, va_list ap)
{
	int	bytes;

	bytes = 0;
	if (flag == 'c')
		bytes += ft_putchar(va_arg(ap, int));
	else if (flag == 's')
		bytes += ft_putstr(va_arg(ap, char *));
	else if (flag == 'p')
		bytes += ft_ptr_base(va_arg(ap, unsigned long), HEXA_LOWER_BASE);
	else if (flag == 'd')
		bytes += ft_n_base(va_arg(ap, int), DECIMAL_BASE);
	return (bytes);
}
