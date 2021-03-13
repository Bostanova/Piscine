/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:15:51 by eerika            #+#    #+#             */
/*   Updated: 2021/03/13 07:51:25 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_print_comb(void)
{
	int i0;
	int i1;
	int i2;

	i0 = 48;
	while (i0 <= 55)
	{
		i1 = i0 + 1;
		while (i1 <= 56)
		{
			i2 = i1 + 1;
			while (i2 <= 57)
			{
				ft_putchar(i0);
				ft_putchar(i1);
				ft_putchar(i2++);
				ft_putchar(',');
				ft_putchar(' ');
			}
			i1++;
		}
		i0++;
	}
}
