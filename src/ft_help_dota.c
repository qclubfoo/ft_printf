/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help_dota.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qclubfoo <qclubfoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:50:34 by qclubfoo          #+#    #+#             */
/*   Updated: 2019/05/16 17:56:24 by qclubfoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*un(char *main, char *s)
{
	char	*tmp_c;

	tmp_c = main;
	if (*s == '-')
		main = ft_strjoin(s, main);
	else
		main = ft_strjoin(main, s);
	free(tmp_c);
	return (main);
}

int		max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
