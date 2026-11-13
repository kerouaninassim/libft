/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <keruaninassim@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:26:28 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/13 17:20:50 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*ptr;
	size_t	i;
	size_t	pasta;

	if (size == 0)
	{
		ptr = malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	pasta = nmemb * size;
	if (nmemb != pasta / size && size != pasta / nmemb)
		return (NULL);
	i = 0;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
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
