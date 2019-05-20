/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:43:45 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/16 10:57:05 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

static void		ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

static void		*ft_memalloc(size_t size)
{
	void	*new;

	new = NULL;
	if (size != 0)
	{
		if (!(new = (void *)malloc(size)))
			return (NULL);
		ft_bzero(new, size);
	}
	return (new);
}

char			*ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}
