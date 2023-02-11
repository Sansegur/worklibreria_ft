/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:59:28 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/03 15:32:09 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// bzero no devuelve nada a diferencia de memset.
// en el main: 1. hay que crear un str 2. hay que llamar a bzero (str, n(número)) y después un printf
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
//	ft_memset(s, '0', n);

	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = '0';
}

int	main(void)
{
	unsigned char	str[] = "NO ME FUNCIONABA EL MAIN";

	ft_bzero(str, 3);
	printf("%s\n", str);
	return (0);		
}
/*
int	main(void)
{
	unsigned char	str[] = "NO ME FUNCIONABA EL MAIN";

	ft_bzero(str, 0);
	printf("%s\n", str);
	return (0);
}
*/
