/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:18:35 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 00:26:05 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	dst = ft_calloc(sizeof(char), len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	return (dst);
}
/*
char	ft_func(unsigned int num, char c)
{
	(void)num;
	return (c - 32);
}

int	main()
{
	char	(*f)(unsigned int, char);
	f = &ft_func;
	printf("%s", ft_strmapi("", f));
}
*/