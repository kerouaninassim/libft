/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:07:19 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 18:40:36 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (src[i] && i < (size - 1) && (size > 0))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (j);
}

/*#include <bsd/string.h>
int	main(void)
{
	char	src[]="salut les potes";
	char	dest[]="yoooo la mif";
	char	src2[]="salut les potes";
	char	dest2[]="yoooo la mif";
	
	printf("%zu \n", ft_strlcpy(dest, src, -8));
	printf("%s \n", dest);
	printf("%zu \n", strlcpy(dest2, src2, -8));
	printf("%s \n", dest2);
}*/
