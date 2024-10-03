/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbstrdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arigonza <arigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:04:57 by arigonza          #+#    #+#             */
/*   Updated: 2024/09/27 17:58:41 by arigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * @brief Checks the size of a char double pointer(char**).
 * 
 * @param str The double pointer to check it size.
 * @return (int) the actual size
 */
int	ft_dbp_size(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * @brief Duplicates a char double pointer(char**),
 * and returns it.
 * 
 * @param s1 The double pointer to duplicate.
 * @return (char**) The duplicate itself.
 */
char	**ft_dbstrdup(char **s1)
{
	char	**s2;
	int		i;

	i = 0;
	s2 = ft_calloc(ft_dbp_size(s1) + 1, sizeof(char *));
	while (s1[i])
	{
		s2[i] = ft_strdup(s1[i]);
		i++;
	}
	s2[i] = NULL;
	return (s2);
}