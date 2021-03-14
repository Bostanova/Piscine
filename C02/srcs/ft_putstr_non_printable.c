/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 21:03:41 by eerika            #+#    #+#             */
/*   Updated: 2021/03/14 08:06:28 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_isprintable(char c)
{
	return (c >= 32 && c <= 126);
}

static void	convert_to_hex(char c)
{
	int temp;
	int first;
	int second;

	temp = (int)c;
	first = temp / 16;
	second = temp % 16;
	if (second > 9)
		second = second + 55;
	ft_putchar(first + '0');
	ft_putchar(second + 32);
}

void		ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isprintable(str[i]))
			convert_to_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
