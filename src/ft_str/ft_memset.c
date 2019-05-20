/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 09:15:46 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/02 17:56:32 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;

	res = (unsigned char *)b;
	while (len--)
	{
		*res = c;
		res++;
	}
	return (b);
}
