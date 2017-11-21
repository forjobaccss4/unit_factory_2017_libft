/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsarapin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:17:55 by vsarapin          #+#    #+#             */
/*   Updated: 2017/11/20 12:36:11 by vsarapin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	a;
	size_t	len;

	str = NULL;
	i = 0;
	a = 0;
	len = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (i == len)
			return (ft_strnew(1));
		while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			len--;
		if ((str = (char*)malloc(sizeof(char) * (len - i + 1))) == NULL)
			return (str);
		while (i < len)
			str[a++] = s[i++];
		str[a] = '\0';
	}
	return (str);
}
