/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:30:55 by sansegur          #+#    #+#             */
/*   Updated: 2023/01/27 20:32:11 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//1.size_t guarda el valor de la memoria a comparar
//2.compara 2 strings
//3.devuelve 0, si las dos son idénticas
//si no devuelve la diferencia de los primeros bites diferentes
//4 para de comparar bites al encontrar la 1a diferencia
//5. devuelve valor negativo si el primer byte es diferente S1 <s2
//6 Devuelve valor positiv si el primer byte es diferente s1> s2
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((str1[i]) - (str2[i]));
	}
	return (0);
}
/*
int	main(void)

{
	printf("%d\n", ft_memcmp("mandarina", "manzana", 5));
	printf("%d\n", ft_memcmp("casita", "casita", 6));
	return (0);
}
*/
