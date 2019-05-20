/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:37:10 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/15 15:05:40 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

t_buf				*ft_buf_new(t_buf *new)
{
	new->size = 0;
	new->top = -1;
	new->err = 0;
	if (!(new->buf = ft_strnew(BUF_SIZE)))
		return (NULL);
	return (new);
}
