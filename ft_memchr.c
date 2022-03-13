/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:19:23 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/21 15:41:49 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	size_t			i;
	unsigned char	target;
	unsigned char	temp;

	i = 0;
	target = c;
	while (i < n)
	{
		temp = *(unsigned char *)(s + i);
		if (temp == target)
			return ((void *)(s + i));
		++i;
	}
	return (NULL);
}
