/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerika <eerika@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:45:02 by eerika            #+#    #+#             */
/*   Updated: 2021/03/14 07:48:20 by eerika           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	check_alpha_digit(char c)
{
	if (ft_is_digit(c) || ft_is_alpha(c))
		return (1);
	return (0);
}

char		*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				previous;

	i = 0;
	previous = 1;
	while (str[i] != '\0')
	{
		if (check_alpha_digit(str[i]))
		{
			if (previous && ft_is_lower(str[i]))
				str[i] -= 32;
			i++;
			previous = 0;
		}
		else
		{
			i++;
			previous = 1;
		}
	}
	return (str);
}
