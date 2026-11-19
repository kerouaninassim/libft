/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:37:08 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 13:43:01 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	int	a[4] = {1, 2, 4, 4};
	int *c = ft_memset(a, 4812, sizeof(int) * 3);

	int	i;
	i = 0;
	while (i<4)
	{
		printf("%d \n", c[i]);
		i++;
	}
}*/
