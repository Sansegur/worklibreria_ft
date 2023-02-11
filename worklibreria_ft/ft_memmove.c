/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:30:48 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/07 16:05:44 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//1. Verifiqua si *dest == *src, si es verdadero, devuelve el *dest.
// 2. Comprueba si el valor de n es 0, si es verdadero, devuelve el *dest.
// 3. Comprueba si *dest < *src, si es verdadero.
//		copia los bytes de *src  a *dest en orden.
// 4. Verifiqua si *dest  > *src, si es verdadero.
//		copia los bytes del *src al *dest en orden inverso.
// 5. Retorna *dest.
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dst + (len - 1)) = *((char  *)src + (len - 1));
			 len--;
		}
	}
	return (dst);
}

int	main(void)
{
	char dst[20] = "pepe";
	char src[20] = "pepa";
	printf("%s\n", ft_memmove(dst, src, 0));
	printf("%s\n", ft_memmove(dst, src, 3));
	printf("%s\n", ft_memmove(dst, src, 4));
	return (0);
}
