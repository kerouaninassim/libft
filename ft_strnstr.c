/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:07:37 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/19 12:47:50 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen((char *)little);
	i = 0;
	if (little_len == 0)
		return ((char *)big);
	while (i < len && (i + little_len <= len) && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while ((i + j) < len && big[i + j] == little[j] && big[i + j]
				&& little[j])
				j++;
		}
		if (little[j] == 0)
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}
/*#include <bsd/string.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("ho la ca vas pas les coquin", "co", 30));
	printf("%s\n", strnstr("ho la ca vas pas les coquin", "co", 30));
}*/
