/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovosmera <ovosmera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:05:58 by ovosmera          #+#    #+#             */
/*   Updated: 2023/09/20 11:39:39 by ovosmera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/* int main() {
	int num = 6;
	int result = ft_fibonacci(num);
	printf("%d\n", result);
} */
