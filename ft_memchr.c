/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 09:09:43 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 18:39:30 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;

	a = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == a)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>

int	main(void)
{
	char *a = ft_memchr("les antipatilles sont cuite a point nommees", 's', 0);
	printf("%s\n", a);
}*/
