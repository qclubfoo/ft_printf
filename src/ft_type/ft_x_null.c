/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_null.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 17:08:09 by qclubfoo          #+#    #+#             */
/*   Updated: 2019/05/16 15:27:56 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void	minus_neg_null(t_param list, char *i, int tmp, t_buf *buf)
{
	if ((list.width - (list.precision > tmp ? list.precision : tmp) -
										list.hasht) >= 0 && list.zero != 1)
		ft_buf_add_s(buf, ft_memnew(list.width - (list.precision > tmp ?
				list.precision : tmp) -
					(list.hasht == 1 && list.precision == -1), ' '), 0);
	if (list.precision == -1)
		ft_buf_add_s(buf, "0", 1);
	if ((list.width - (list.precision > tmp ? list.precision : tmp) -
										list.hasht) > 0 && list.zero == 1)
		ft_buf_add_s(buf, ft_memnew(list.width - tmp -
		(list.hasht == 1 && list.precision == -1), '0'), 0);
	if (list.precision > tmp)
		ft_buf_add_s(buf, ft_memnew(list.precision - tmp, '0'), 0);
}

void	minus_pos_null(t_param list, char *i, int tmp, t_buf *buf)
{
	if (list.precision == -1)
		ft_buf_add_s(buf, "0", 1);
	if (list.precision > tmp)
		ft_buf_add_s(buf, ft_memnew(list.precision - tmp, '0'), 0);
	if ((list.width - (list.precision > tmp ? list.precision : tmp) -
										list.hasht) >= 0 && list.zero != 1)
		ft_buf_add_s(buf,
		ft_memnew(list.width - (list.precision > tmp ? list.precision : tmp)
					- (list.hasht == 1 && list.precision == -1), ' '), 0);
}
