/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:39:21 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/19 11:56:11 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	e;

	i = ft_strlen(src);
	j = 0;
	e = 0;
	while (j < destsize && dest[j])
		j++;
	if (destsize > j)
	{
		while (e < (destsize - j - 1) && src[e])
		{
			dest[j + e] = src[e];
			e++;
		}
		dest[j + e] = 0;
		return (i + j);
	}
	return (destsize + i);
}

/*#include <bsd/string.h>

int	main(void)
{
	char	dest[50]="yooo tout le monde c'est";
	char	src[]="squeezie";
	char	dest2[50]="yooo tout le monde c'est";
	char	src2[]="squeezie";

	printf("%zu\n", ft_strlcat(dest, src, sizeof dest));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest2, src2, sizeof dest2));
	printf("%s\n", dest2);
}*/
