/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:31:00 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/19 12:49:39 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if ((size_t)start >= ft_strlen((char *)s))
	{
		ptr = malloc(sizeof(char) * 1);
		if (!ptr)
			return (0);
		ptr[0] = 0;
		return (ptr);
	}
	if (len > ft_strlen((char *)&s[start]))
		len = ft_strlen((char *)&s[start]);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (0);
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

/*int	main(void)
{
	char	*a = ft_substr("ho mais la les mechant ca
       	me rend pas content", 0, 0);
	printf("%s", a);
}*/
