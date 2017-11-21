/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsarapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:07:56 by vsarapin          #+#    #+#             */
/*   Updated: 2017/11/19 17:27:43 by vsarapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a;

	a = *alst;
	if (!alst || !del)
		return ;
	while (*alst)
	{
		a = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = a;
	}
	*alst = NULL;
}
