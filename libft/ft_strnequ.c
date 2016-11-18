/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:05:24 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/19 00:44:18 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t len;

	if (!s1 || !s2 || *s2 == 0 || *s1 == 0 || n == 0)
		return (1);
	len = ft_strlen(s1) > ft_strlen(s2) ? ft_strlen(s2) : ft_strlen(s1);
	len = len > n ? n : len;
	return ((ft_strncmp(s1, s2, len) == 0));
}
