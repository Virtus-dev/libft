/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_np.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arigonza <arigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:40:45 by arigonza          #+#    #+#             */
/*   Updated: 2025/04/05 20:13:09 by arigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strchr_np(char *str, int c)
{
	if (!str)
	{
		ft_putstr("str NULL\n");
		return (0);
	}
	if (*str == c)
		return (1);
	else
		return (0);
}