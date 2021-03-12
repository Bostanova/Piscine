/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:52:23 by eerika            #+#    #+#             */
/*   Updated: 2021/03/12 12:52:25 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	size--;
	while (i <= size)
	{
		temp = tab[size];
		tab[size--] = tab[i];
		tab[i++] = temp;
	}
}
