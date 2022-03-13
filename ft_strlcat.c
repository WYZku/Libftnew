/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <kwoowong@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:25:06 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/19 22:56:17 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	j = dstlen;
	if (dstlen < (dstsize - 1) && (dstsize > 0))
	{
		while (src[i] && j < dstsize - 1)
		{
			dst[j] = src[i];
			++i;
			++j;
		}
		dst[j] = '\0';
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
