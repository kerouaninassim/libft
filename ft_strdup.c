/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:47:47 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/13 15:09:11 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	ptr = malloc(sizeof(char) * (j + 1));
	if (!ptr)
		return (0);
	if (j == 0)
		ptr[0] = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
/*int	main(void)
{
	char	*a = ft_strdup("Kevin le coleoptere iregulier en OQTF");
	printf("%s", a);
}*/
