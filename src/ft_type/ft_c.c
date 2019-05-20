/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 10:52:41 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/16 15:22:16 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void	ft_c(t_param list, char c, t_buf *buf)
{
	if (list.length == 'l')
		ft_c_up(list, c, buf);
	else
	{
		if (list.minus == 0 && list.zero == 1 && list.width > 1)
			ft_buf_add_s(buf,
				ft_memset(ft_strnew(list.width - 1), '0', list.width - 1), 0);
		else if (list.minus == 0 && list.zero == 0 && list.width > 1)
			ft_buf_add_s(buf,
				ft_memset(ft_strnew(list.width - 1), ' ', list.width - 1), 0);
		ft_buf_add_c(buf, c);
		if (list.minus == 1 && list.width > 1)
			ft_buf_add_s(buf,
				ft_memset(ft_strnew(list.width - 1), ' ', list.width - 1), 0);
	}
}
