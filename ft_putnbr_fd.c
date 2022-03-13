/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:23:52 by kwoowong          #+#    #+#             */
/*   Updated: 2022/03/03 15:56:26 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	newn;

	newn = n;
	if (newn < 0)
	{
		ft_putchar_fd('-', fd);
		newn = newn * -1;
	}
	if (newn < 10)
	{
		ft_putchar_fd(newn + 48, fd);
	}
	else
	{
		ft_putnbr_fd(newn / 10, fd);
		ft_putnbr_fd(newn % 10, fd);
	}
}
