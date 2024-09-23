/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrignore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arigonza <arigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:15:18 by arigonza          #+#    #+#             */
/*   Updated: 2024/09/19 12:22:05 by arigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * @brief Takes a string and creates a new one without the desired character.
 *  (The original string gets freed).
 * 
 * @param str the string you want to trim the character from.
 * @return char* the new string without the desired character.
 */
char	*ft_chrignore(char *str, char c)
{
	int		i;
	char	*new_str;

	i = 0;
	new_str = ft_calloc(ft_strlen(str), sizeof(char));
	while (str[i])
	{
		if (str[i] != c)
			new_str[i] = str[i];
		i++;
	}
	free (str);
	return (new_str);
}
