/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:27:28 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/13 16:51:30 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (n == 0 || d == s)
		return (dest);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (0 < n--)
			d[n] = s[n];

	}
	return (dest);
}
/*#include <string.h>
int	main(void)
{
	char	s[]="cacatoesseleperdu";
	char	d[]="luteutrtrtrtr";
	char	*a = ft_memmove(d, s, 4);
	char	*b = memmove(d, s, 4);

	printf("%s\n", a);
	printf("%s\n", b);
}*/
