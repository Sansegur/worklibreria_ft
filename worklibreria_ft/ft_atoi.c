/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sansegur <sansegur@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:40:39 by sansegur          #+#    #+#             */
/*   Updated: 2023/02/09 20:19:23 by sansegur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || str[i] >= 9  && str[i] <= 13)
		i++;
	if (str[i] == '-')
			sign = - 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return ((int)(res * sign));
}

int	main(void)
{
	printf("%i\n", ft_atoi("d 2htwuuq	"));
	printf("%i\n", ft_atoi("125600"));
	printf("%i\n", ft_atoi("-2147483648"));
	return (0);
}
