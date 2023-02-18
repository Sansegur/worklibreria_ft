/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:41:43 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/18 16:52:38 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = start;
	new = (char *)malloc(len + 1);
	if (!s || !new)
		return (0);
	while (i < ft_strlen(s) && j < len)
	{
		new[j] = s[i];
		j++;
		i++;
	}
	new[j] = '\0';
	return (*new);
}
/*
int	main(void)
{
	char	*new = "esto me cuesta muuucho";
	size_t	start  = 4;
	size_t	len = 22;

	char *dst = substr(new, start, len);
	printf("%s\n", dst);
	return (0);
}
*/
