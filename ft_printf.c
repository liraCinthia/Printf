/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:19 by clira-ne          #+#    #+#             */
/*   Updated: 2024/01/03 09:22:45 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *type, ...)
{
	va_list	ap;
	int		i;
	int		bytes;

	if (!type)
		return (-1);
	va_start(ap, type);
	i = 0;
	bytes = 0;
	while (type[i])
	{
		if (type[i] == '%' && type[i + 1] != '\0')
			bytes += ft_parsing(type[++i], ap);
		else
			bytes += ft_putchar(type[i]);
		i++;
	}
	va_end(ap);
	return (bytes);
}
