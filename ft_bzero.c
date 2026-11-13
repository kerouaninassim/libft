/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:55:01 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/12 18:16:56 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	int	i = 0;
	int a[4] = {1, 2, 3, 4};

	ft_bzero(a, sizeof(int)*4);
	while (i < 4)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
