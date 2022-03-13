/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <kwoowong@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:06:15 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/17 13:39:18 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	length;

	if (!dst || !src)
		return (0);
	length = len;
	if (dst > src)
	{
		i = length - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			--i;
		}
	}
	else
	{
		i = 0;
		while (i < length)
		{	
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			++i;
		}
	}
	return (dst);
}
