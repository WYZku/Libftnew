/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:28:23 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/09 22:17:50 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memb, size_t size)
{
	void	*ptr;

	ptr = malloc(memb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, memb * size);
	return (ptr);
}
