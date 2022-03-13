/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:45:24 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/13 16:06:31 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_tmp;
	const unsigned char	*s2_tmp;
	size_t				i;

	i = 0;
	s1_tmp = (const unsigned char *)s1;
	s2_tmp = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_tmp[i] != s2_tmp[i])
		{
			return (s1_tmp[i] - s2_tmp[i]);
		}
		++i;
	}
	return (0);
}
