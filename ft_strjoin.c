/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:54:51 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/18 19:13:11 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2)
				+ 1));
	if (!ptr)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

/*int	main(void)
{
	char	*a = ft_strjoin("salut les ", "copains");
	printf("%s", a);
}*/
