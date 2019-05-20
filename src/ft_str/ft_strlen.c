/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:49:31 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/16 14:40:18 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

size_t	ft_strlen(const char *s)
{
	char *tmp;

	if (s)
	{
		tmp = (char*)s;
		if (s)
			while (*tmp)
				tmp++;
		return (tmp - s);
	}
	return (0);
}
