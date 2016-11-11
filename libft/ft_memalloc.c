/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:47:00 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/11 18:01:24 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *s1;

	if (!size)
		return (NULL);
	s1 = (void*)malloc(size);
	if (!s1)
		return (NULL);
	ft_bzero(s1, size);
	return ((void*)s1);
}
