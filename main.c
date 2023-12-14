/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:47:15 by clira-ne          #+#    #+#             */
/*   Updated: 2023/12/14 14:56:36 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	void	*ptr = NULL;
	char	*str = NULL;

	ft_printf("func criada:\n");
	ft_printf("%c\n", 'a');
	printf("original:\n");
	printf("%c\n", 'a');

	ft_printf("func criada:\n");
	ft_printf("%s\n", "hello world");
	printf("original:\n");
	printf("%s\n", "hello world");

	ft_printf("func criada:\n");
	ft_printf("%s\n", str);
	printf("original:\n");
	printf("%s\n", str);

	ft_printf("func criada:\n");
	ft_printf("%p\n", ptr);
	printf("original:\n");
	printf("%p\n", ptr);

	ft_printf("func criada:\n");
	ft_printf("%d\n", -42);
	printf("original:\n");
	printf("%d\n", -42);

	ft_printf("func criada:\n");
	ft_printf("%d\n", INT_MAX);
	printf("original:\n");
	printf("%d\n", INT_MAX);

	ft_printf("func criada:\n");
	ft_printf("%d\n", INT_MIN);
	printf("original:\n");
	printf("%d\n", INT_MIN);

	ft_printf("func criada:\n");
	ft_printf("%i\n", -42);
	printf("original:\n");
	printf("%i\n", -42);

	ft_printf("func criada:\n");
	ft_printf("%u\n", 42);
	printf("original:\n");
	printf("%u\n", 42);

	ft_printf("func criada:\n");
	ft_printf("%x\n", 42);
	printf("original:\n");
	printf("%x\n", 42);

	ft_printf("func criada:\n");
	ft_printf("%X\n", 42);
	printf("original:\n");
	printf("%X\n", 42);

	ft_printf("func criada:\n");
	ft_printf("%%\n", '%');
	printf("original:\n");
	printf("%%\n", '%');
}
