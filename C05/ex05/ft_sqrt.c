/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:06:37 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/23 12:01:21 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long	sqrt;

	sqrt = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (sqrt * sqrt < nb)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	return (0);
}

/* int main() {
	int num = 169;
	int result = ft_sqrt(num);
	printf("Square root of %d is %d\n", num, result);
} */
