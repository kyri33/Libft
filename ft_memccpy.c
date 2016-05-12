/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kioulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:50:10 by kioulian          #+#    #+#             */
/*   Updated: 2016/05/11 16:56:34 by kioulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	char		character;
	size_t		i;
	char		*s1;
	const char	*s2;

	i = 0;
	character = (unsigned char)c;
	s1 = (char*)dst;
	s2 = (char*)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == character)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
