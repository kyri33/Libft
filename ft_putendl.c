/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kioulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:12:14 by kioulian          #+#    #+#             */
/*   Updated: 2016/05/12 10:38:11 by kioulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	*str;

	str = (char *)malloc(sizeof(s));
	ft_strcpy(str, s);
	ft_putstr(str);
	ft_putchar('\n');
}
