/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:58:19 by clira-ne          #+#    #+#             */
/*   Updated: 2023/12/14 17:14:11 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		bytes;

	if (!str)
		return (-1);
	va_start(ap, str);
	i = 0;
	bytes = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
			bytes += ft_parser(str[++i], ap);
		else
			bytes += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (bytes);
}
