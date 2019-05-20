/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeanna <djeanna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:59:28 by djeanna           #+#    #+#             */
/*   Updated: 2019/05/16 12:09:59 by djeanna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	int		iter;
	char	*res;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(res = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	iter = 0;
	while (iter < len1)
	{
		res[iter] = s1[iter];
		iter++;
	}
	while (iter - len1 < len2)
	{
		res[iter] = s2[iter - len1];
		iter++;
	}
	res[iter] = '\0';
	return (res);
}
