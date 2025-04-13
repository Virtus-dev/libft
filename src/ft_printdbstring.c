/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdbstring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arigonza <arigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:10:29 by arigonza          #+#    #+#             */
/*   Updated: 2025/04/12 13:33:28 by arigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_printdbstring(char **db)
{
	int	i;

	i = 0;
	while (db[i])
	{
		ft_putstr(db[i++]);
		write(1, "\n", 1);
	}
}