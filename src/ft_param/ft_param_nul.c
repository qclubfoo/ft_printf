/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_nul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 08:29:15 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/15 15:05:05 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void				ft_param_nul(t_param *param)
{
	param->precision = -1;
	param->width = 0;
	param->minus = 0;
	param->plus = 0;
	param->zero = 0;
	param->hasht = 0;
	param->space = 0;
	param->length = 0;
}
