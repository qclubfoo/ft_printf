/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 17:38:12 by djeanna           #+#    #+#             */
/*   Updated: 2019/04/24 14:46:40 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_atoi(const char *str)
{
	unsigned long int	res;
	int					sign;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\f' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
	{
		if ((res > MAX_INT || (res == MAX_INT && (*str - '0') > 7)) &&
				sign == 1)
			return (-1);
		else if ((res > MAX_INT || (res == MAX_INT && (*str - '0') > 8)) &&
				sign == -1)
			return (0);
		res = 10 * res + (int)(*str - '0');
		str++;
	}
	return ((int)(sign * res));
}
