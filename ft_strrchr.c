/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:34:39 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/20 00:46:03 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	target;

	i = 0;
	target = c;
	temp = NULL;
	while (s[i])
	{
		if (s[i] == target)
		{
			temp = (char *)s + i;
		}
		++i;
	}
	if (s[i] == target)
	{
		temp = (char *)s + i;
	}
	return (temp);
}
