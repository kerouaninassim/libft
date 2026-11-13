/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:07:37 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/12 18:19:03 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && big[i] && little[j] && i < len)
			{
				i++;
				j ++;
			}
		}
		if (little[j] == 0)
			return (&((char *)big)[i - j]);
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
