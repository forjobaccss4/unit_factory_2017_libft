/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsarapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:14:16 by vsarapin          #+#    #+#             */
/*   Updated: 2017/11/19 20:33:06 by vsarapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int nb;
	int is_negative;
	int max_num;

	nb = 0;
	max_num = 0;
	is_negative = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		is_negative = (*str == '-' ? -1 : 1);
		str++;
	}
	while (*str != '\0' && ft_isdigit(*str))
	{
		if (is_negative == -1 && ++max_num >= 21)
			return (0);
		else if (is_negative == 1 && ++max_num >= 21)
			return (-1);
		nb = nb * 10 + (int)(*str++ - '0');
	}
	return (nb * is_negative);
}
