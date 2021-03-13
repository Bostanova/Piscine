/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:16:33 by eerika            #+#    #+#             */
/*   Updated: 2021/03/11 19:16:37 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int nb)
{
	int		i;
	int		sign;
	char	arr[10];

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		sign = 0;
		if (nb < 0)
		{
			sign = 1;
			nb = nb * (-1);
		}
		i = 9;
		while (nb >= 10)
		{
			arr[i--] = nb % 10;
			nb = nb / 10;
		}
		arr[i] = nb;
		if (sign == 1)
			ft_putchar('-');
		while (i <= 9)
			ft_putchar(arr[i++] + '0');
	}
}
