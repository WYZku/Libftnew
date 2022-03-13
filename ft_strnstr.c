/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 21:36:12 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/22 12:00:49 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	i;
	int		j;
	int		temp_len;
	int		target_len;

	i = 0;
	j = 0;
	target_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		temp_len = 0;
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && needle[j]
			&& i + j < len)
		{
			++j;
			++temp_len;
			if (temp_len == target_len)
				return ((char *)haystack + i);
		}
		++i;
	}
	return (NULL);
}
