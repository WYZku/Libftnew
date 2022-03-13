/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:58:47 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/20 00:13:38 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	target;

	target = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == target)
		{
			return ((char *)(s + i));
		}
		++i;
	}
	if (s[i] == target)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
