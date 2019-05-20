/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 13:04:16 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/16 17:56:30 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void			ft_lnum_new(t_lnum *a)
{
	a->size = 0;
	a->ar[0] = 0;
}

static void		ft_lshift(t_lnum *a, int val)
{
	a->size++;
	a->ar[a->size] = val;
}

void			ft_lnum_plus(t_lnum *a, t_lnum b)
{
	int		carry;
	size_t	i;

	i = 0;
	carry = 0;
	while (i < max(a->size, b.size) + 1 || carry)
	{
		if (i == a->size + 1)
			ft_lshift(a, 0);
		a->ar[i] += carry + (i < b.size + 1 ? b.ar[i] : 0);
		carry = a->ar[i] >= BASE;
		if (carry)
			a->ar[i] -= BASE;
		i++;
	}
}

void			ft_lnum_plus2(t_lnum *a, int b)
{
	a->ar[0] += b;
}

void			ft_lnum_mul(t_lnum *a, int b)
{
	int			carry;
	long long	cur;
	size_t		i;
	int			size;

	carry = 0;
	i = 0;
	while (i < a->size + 1 || carry)
	{
		if (i == a->size + 1)
			ft_lshift(a, 0);
		cur = carry + a->ar[i] * 1ll * b;
		a->ar[i] = (int)(cur % BASE);
		carry = (int)(cur / BASE);
		i++;
	}
	while (a->size > 0 && a->ar[a->size] == 0)
		a->size--;
}
