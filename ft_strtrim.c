/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:20:50 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 18:41:13 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlenset(char const *str, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && ft_checkset(str[i], set))
		i++;
	while (str[i])
	{
		i++;
		count++;
	}
	i--;
	while (str[i] && ft_checkset(str[i], set) && i >= 0)
	{
		i--;
		if (count > 0)
			count--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlenset(s1, set) + 1));
	if (!ptr)
		return (0);
	while (ft_checkset(s1[i], set) && s1[i])
		i++;
	j = 0;
	while (j < ft_strlenset(s1, set))
	{
		ptr[j] = s1[i];
		j++;
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}

/*int	main(void)
{
	char	*a = ft_strtrim("salut les potes salut", "salut");
	printf("%d\n", ft_strlenset("salut les potes salut", "salut"));
	printf("%s\n", a);
}*/
