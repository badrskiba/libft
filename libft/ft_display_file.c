/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bskiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:53:28 by bskiba            #+#    #+#             */
/*   Updated: 2016/11/18 18:59:51 by bskiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int			ft_display_file(char *fichier)
{
	int		fd;
	char	*buffer;

	fd = open(fichier, O_RDONLY);
	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
	return (0);
}
