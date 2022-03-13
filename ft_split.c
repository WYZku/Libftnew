/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:55:45 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/12 23:13:27 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s && *s != c)
			++size;
		while (*s && *s != c)
			++s;
	}
	return (size);
}

int	ft_custom_strlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		++i;
	return (i);
}

char	*ft_copy_word(const char *src, int len, char c)
{
	int		i;
	char	*res;

	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (*src && *src != c)
	{
		res[i] = *src;
		++i;
		++src;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_assign_arr(char const *s, char c, char **arr)
{
	int	i;
	int	len;
	int	words;

	i = 0;
	words = ft_count_word(s, c);
	while (i < words)
	{
		len = 0;
		while (*s && *s == c)
			++s;
		len = ft_custom_strlen(s, c);
		arr[i] = ft_copy_word(s, len, c);
		while (*s && *s != c)
			++s;
		++i;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!arr)
		return (NULL);
	arr = ft_assign_arr(s, c, arr);
	return (arr);
}
