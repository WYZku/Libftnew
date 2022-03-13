/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:18:28 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/10 15:02:42 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_malloc_one(void)
{
	char	*sub;

	sub = malloc(sizeof(char));
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_tmp;

	if (!s)
		return (NULL);
	len_tmp = ft_strlen(s);
	if (start >= len_tmp)
	{
		sub = ft_malloc_one();
		return (sub);
	}
	if (len_tmp <= len)
	{
		sub = malloc(len_tmp - start + 1);
		len = len_tmp - start;
	}
	else
		sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
