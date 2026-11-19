/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:26:28 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 19:07:33 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (nmemb != total / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/*int	main(void)
{
	char	*a = calloc(6, 1);
	int i = 0;
	while (i < 20)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
