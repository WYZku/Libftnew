/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:03:42 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/24 11:53:50 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		++i;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*res;

	(void)len;
	if (!s1)
		return (NULL);
	while (ft_is_set(*s1, set))
		++s1;
	i = ft_strlen(s1);
	while (i > 0 && ft_is_set(s1[i - 1], set))
		--i;
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, i);
	res[i] = '\0';
	return (res);
}
