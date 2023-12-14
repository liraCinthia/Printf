/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:35:12 by clira-ne          #+#    #+#             */
/*   Updated: 2023/12/14 17:11:39 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL_BASE "0123456789"
# define HEXA_UPPER_BASE "0123456789ABCDEF"
# define HEXA_LOWER_BASE "0123456789abcdef"
// # define FLAGS "#0+- ."
//# define FORMATS "cspdiuxX%"

# include <unistd.h>
# include <stdarg.h>

int		ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_n_base(long long num, char *base);
int		ft_ptr_base(unsigned long num, char *base);
int		ft_printf(const char *str, ...);
int		ft_parser(char flag, va_list ap);
char	*ft_strchr(const char *str, int c);
int		ft_parser_bonus(char flag, va_list ap);
// char	*ft_strchr(const char *str, int c);

#endif
