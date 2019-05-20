/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_buf_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 16:46:30 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/15 19:02:04 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int		ft_do_buf_empty(t_buf *buf)
{
	int size;

	size = buf->size;
	write(1, buf->buf, buf->top + 1);
	free(buf->buf);
	buf = NULL;
	return (size);
}

void	free_buf(t_buf *buf)
{
	free(buf->buf);
	buf = NULL;
}
