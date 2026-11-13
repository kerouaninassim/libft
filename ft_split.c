/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:05:01 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/13 17:02:46 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
			i++;
		if (str[i - 1] != c)
			count++;
	}
	return (count);
}

char	**ft_freelock(char **s, int size)
{
	size -= 1;
	while (size >= 0)
	{
		free(s[size]);
		size --;
	}
	free(s);
	return (NULL);
}

int	ft_countlettres(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_mallocked(char const *str, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_countlettres(str, c) + 1));
	if (!ptr)
		return (0);
	while (i < ft_countlettres(str, c))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	j = 0;
	i = 0;
	while (j < ft_countwords(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j] = ft_mallocked(&s[i], c);
		if (!tab[j])
			return (ft_freelock(tab, j));
		i += ft_countlettres(&s[i], c);
		j++;
	}
	tab[j] = 0;
	return (tab);
}

/*int	main(void)
{
	int	i = 0;
	char	**a = ft_split("Doriando du bendo na bendo doulce de leche", ' ');
	while (i < ft_countwords("Doriando du bendo na bendo doulce de leche", ' '))
	{
		printf("%s\n", a[i]);
		i++;
	}
	free(a);
}*/
