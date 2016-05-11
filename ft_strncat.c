/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kioulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 12:55:46 by kioulian          #+#    #+#             */
/*   Updated: 2016/05/11 16:05:17 by kioulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*str;
	int			len;
	size_t		i;

	str = s1;
	i = 0;
	while (str[len] != '\0')
		len++;
	while (i < n && s2[i] != '\0')
	{
		str[len] = s2[i];
		i++;
	}
	str[i] = '\0';
	return (s1);
}
