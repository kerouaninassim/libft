/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:02:20 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 13:44:05 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (*s != (char)c && s)
	{
		s--;
		i--;
		if (i == -1)
			return (0);
	}
	return ((char *)s);
}

/*int	main(void)
{
	printf("%s", ft_strrchr("zoquiette gratine au chevre chaud", 122));
}*/
