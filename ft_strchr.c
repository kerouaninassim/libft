/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:49:59 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 13:44:34 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s != a && *s)
	{
		s++;
	}
	if (*s == 0)
	{
		if (a == 0)
			return ((char *)s);
		return (NULL);
	}
	else
		return ((char *)s);
}

/*int	main(void)
{
	printf("%s", ft_strchr("salut les copain",7 9));
}*/
