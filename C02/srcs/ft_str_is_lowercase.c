/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:57:25 by eerika            #+#    #+#             */
/*   Updated: 2021/03/13 23:06:22 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_str_is_lowercase(char *str)
{
	while (*(str))
	{
		if (*(str) > 'A' && *(str) < 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}
