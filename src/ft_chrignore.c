/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrignore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arigonza <arigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:15:18 by arigonza          #+#    #+#             */
/*   Updated: 2025/04/06 23:28:02 by arigonza         ###   ########.fr       */
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
	int		j;
	char	*new_str;

	i = 0;
	j = 0;
	new_str = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	while (str[i])
	{
		if (str[i] != c)
			new_str[j++] = str[i];
		//printf("str[%i] = %c & new_str[%i] = %c\n", i, str[i], j, new_str[j]);
		i++;
	}
	free (str);
	return (new_str);
}
