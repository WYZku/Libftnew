/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:54:01 by kwoowong          #+#    #+#             */
/*   Updated: 2022/02/21 14:42:50 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char	*s2, size_t	n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (n-- > 0)
	{
		if (s1[i] != s2[j])
			return ((unsigned char)s1[i] - (unsigned char)s2[j]);
		if (s1[i] == '\0')
			return (0);
		++i;
		++j;
	}
	return (0);
}
