/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kioulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 17:19:07 by kioulian          #+#    #+#             */
/*   Updated: 2016/05/11 17:27:39 by kioulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little == "")
		return (big);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			while (little[j] != '\0')
			{
				if (big[i] == little[j])
				{
					i++;
					j++;
				}
				else
				{
					j = 0;
					break;
				}
			}
		}
		i++;
	}
	if (j = ft_strlen(little))
		return (&big[i - j - 1]);
	else
		return (NULL);
}
