/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 23:03:36 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/05 12:26:35 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double	ft_neg_pow(long double n, int pow)
{
	long double res;

	res = 1;
	pow *= -1;
	while (pow)
		if (pow & 1)
		{
			res = (long double)res / (long double)n;
			--pow;
		}
		else
		{
			n = (long double)n * (long double)n;
			pow >>= 1;
		}
	return (res);
}
