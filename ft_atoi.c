/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:02:03 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/22 12:21:25 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*nptr)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	if (!nptr)
		return (0);
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\v')
		++i;
	neg = 1;
	if (nptr[i] == '-')
	{
		neg = -1;
		++i;
	}
	else if (nptr[i] == '+')
		++i;
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		++i;
	}
	return (result * neg);
}
