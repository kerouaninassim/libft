/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:25:47 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/17 13:24:17 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(long int nb)
{
	int			len;
	long int	n;

	n = nb;
	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

static void	ft_isnotpos(char *ptr, long int n)
{
	int	len;

	len = ft_nblen(n);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (ptr[len] != '-')
	{
		ptr[len] = (n % 10) + 48;
		n /= 10;
		len--;
	}
}



char	*ft_itoa(int n)
{
	char			*ptr;
	long int		nb;
	int				len;

	nb = n;
	len = ft_nblen(nb);
	if (nb < 0)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len] = 0;
	len--;
	if (nb < 0)
		ft_isnotpos(ptr, nb);
	else
	{
		while (len >= 0)
		{
			ptr[len] = (nb % 10) + 48;
			nb /= 10;
			len--;
		}
	}
	return (ptr);
}


/*int	main(void)
{
	printf("%d\n", ft_nblen(-0));
	printf("%s\n", ft_itoa(0));
}*/