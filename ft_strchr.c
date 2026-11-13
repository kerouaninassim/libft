/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:49:59 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/13 14:36:47 by nkerouan         ###   ########.fr       */
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
