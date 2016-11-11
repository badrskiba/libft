/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:09:15 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/11 13:17:32 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *tmp;
	int i;
	int j;
	int k;

	if (*s)
	{
		i = 0;
		k = 0;
		j = ft_strlen(s);
		tmp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (tmp == NULL)
			return (NULL);
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		while (i <= j)
		{
			tmp[k] = s[i];
			i++;
			k++;
		}
		tmp[k] = '\0';
		return ((char*)s);
	}
	return (NULL);
}
