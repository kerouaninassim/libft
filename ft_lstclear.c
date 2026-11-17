/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerouan <nkerouan@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 13:44:45 by nkerouan          #+#    #+#             */
/*   Updated: 2026/11/15 14:13:56 by nkerouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = NULL;
	if (!*lst)
		return ;
	temp = (*lst)->next;
	ft_lstdelone(*lst, del);
	while (temp)
	{
		*lst = temp;
		temp = temp->next;
		ft_lstdelone(*lst, del);
	}
	*lst = NULL;
}
