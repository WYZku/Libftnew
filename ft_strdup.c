/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:00:26 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/09 22:57:58 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	int		len;
	void	*dest;

	len = ft_strlen(s) + 1;
	dest = malloc(len);
	if (!dest)
		return (NULL);
	return ((char *)ft_memcpy(dest, s, len));
}
