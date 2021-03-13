/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:17:00 by eerika            #+#    #+#             */
/*   Updated: 2021/03/11 19:17:02 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i >= 97)
		ft_putchar(i--);
}
