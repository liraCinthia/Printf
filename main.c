/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clira-ne <clira-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:47:15 by clira-ne          #+#    #+#             */
/*   Updated: 2023/12/13 19:52:16 by clira-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	void	*ptr = "hello world";
	char	*str = NULL;

	// ft_printf("func criada:\n");
	// ft_printf("%c\n", 'a');
	// printf("original:\n");
	// printf("%c\n", 'a');

	// ft_printf("func criada:\n");
	// ft_printf("%s\n", "hello world");
	// printf("original:\n");
	// printf("%s\n", "hello world");

	// ft_printf("func criada:\n");
	// ft_printf("%p\n", ptr);
	// printf("original:\n");
	// printf("%p\n", ptr);

	ft_printf("func criada:\n");
	ft_printf("%d\n", -42);
	printf("original:\n");
	printf("%d\n", -42);
}
