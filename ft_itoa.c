/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:05:44 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/12 15:54:21 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_sign(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (1);
}

int	ft_check_neg(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		ten;
	int		i;
	char	*res;

	sign = ft_check_neg(n);
	i = 1;
	ten = 1;
	while (n / ten / 10 != 0 && ++i)
		ten *= 10;
	res = malloc((unsigned long)(i + sign + 1));
	if (!res)
		return (NULL);
	sign = ft_check_sign(sign);
	i = 0;
	if (sign == -1)
		res[i++] = '-';
	while (ten != 0)
	{
		res[i++] = (char)((int)((n / ten) * sign) + 48);
		n = n % ten;
		ten = ten / 10;
	}
	res[i] = '\0';
	return (res);
}
